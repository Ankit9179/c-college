#include <stdio.h>
int compareNum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}
void main()
{
    int num1, num2, num3, result;
    printf("enter num ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = compareNum(num1, num2, num3);
    printf("%d is biggest num :", result);
}