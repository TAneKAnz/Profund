#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("*\n");
        return 1;
    }
    for (int j = 1; j <= n; j++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 2; i <= n-1; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            if (k == 1 || k == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int j = 1; j <= n; j++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}