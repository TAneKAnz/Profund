#include<stdio.h>
#include<windows.h>
#include<conio.h>
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
	gotoxy(x+2, y);
	printf("^");
}
void erase_bullet(int x, int y)
{
	gotoxy(x + 2, y);
	printf(" ");
}
void erase_ship(int x, int y)
{
	gotoxy(x, y);
	setcolor(0, 0);
	printf("     ");
}
int main()
{
	char ch = '.';
	int x = 38, y = 20;
	int bx[5], by[5];
	int drt = 0; 
	int bullet[] = { 0,0,0,0,0 };
	setcursor(0);
	draw_ship(x, y);
	do {
		if (_kbhit()) {
			ch = _getch();
			if (ch == 'a' && drt >= 0)
			{
				drt--;
			}
			if (ch == 'd' && drt <= 0)
			{
				drt++;
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
						bx[i] = x, by[i] = y;
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