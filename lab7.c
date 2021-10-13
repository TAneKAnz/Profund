#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

int sx, sy, scores = 0;

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void setcursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}
void setcolor(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}
void draw_ship(int x, int y)
{
	gotoxy(x, y);
	setcolor(2, 4);
	printf("<-0->");
	setcolor(4, 0);
}
void draw_bullet(int x, int y)
{
	gotoxy(x, y);
	printf("^");
}
void erase_ship(int x, int y)
{
	gotoxy(x, y);
	setcolor(0, 0);
	printf("     ");
}
void erase_bullet(int x, int y)
{
	gotoxy(x, y);
	printf(" ");
}
void draw_star()
{
	sx = (rand() % 61) + 10; sy = (rand() % 4) + 2;
	gotoxy(sx, sy);
	printf("*");
}
void erase_star(int x, int y)
{
	gotoxy(x, y);
	printf(" ");
}
void show_score()
{
	gotoxy(69, 0);
	printf("Scores = %d", scores);
}
int main()
{
	srand(time(NULL));
	char ch = '.';
	int x = 38, y = 20;
	int bullet[] = { 0, 0, 0, 0, 0 };
	int bx[5], by[5];
	int drt = 0;
	draw_ship(x, y);
	draw_star();
	show_score();
	//printf("%d %d", sx, sy);
	setcursor(0);
	do
	{
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 'a' && drt >= 0)
			{
				drt = -1;
			}
			if (ch == 'd' && drt <= 0)
			{
				drt = 1;
			}
			if (ch == 's')
			{
				drt = 0;
			}
			if (ch == ' ')
			{
				for (int i = 0; i < 5; i++)
				{
					if (bullet[i] == 0)
					{
						bullet[i] = 1;
						bx[i] = x +2; by[i] = y;
						draw_bullet(bx[i], --by[i]);
						break;
					}
				}
			}
			fflush(stdin);
		}
		if (drt == -1 && x > 0)
		{
			erase_ship(x, y);
			draw_ship(x += drt, y);
		}
		if (drt == 1 && x < 75)
		{
			erase_ship(x, y);
			draw_ship(x += drt, y);
		}
		for (int i = 0; i < 5; i++)
		{
			if (bullet[i] == 1)
			{
				if (by[i] > 1)
				{
					erase_bullet(bx[i], by[i]);
					draw_bullet(bx[i], --by[i]);
					//printf("%d %d", bx[i], by[i]);
					if (bx[i] == sx && by[i] == sy)
					{
						erase_star(sx, sy);
						erase_bullet(bx[i], by[i]);
						bullet[i] = 0;
						Beep(700, 100);
						scores++;
						show_score();
						draw_star();
					}
				}
				else
				{
					erase_bullet(bx[i], by[i]);
					bullet[i] = 0;
				}
			}
		}
		Sleep(100);
	} while (ch != 'x');
	return 0;
}