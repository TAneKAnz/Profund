#include <stdio.h>

int main()
{
    int a,b,c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    int max = 0;
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;        
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else{
            max = c;
        }
    }
    printf("Max: %d\n", max);
    return 0;
}