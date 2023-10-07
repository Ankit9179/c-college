#include <stdio.h>
// function
int findFact(int x)
{
    int y = 1;
    for (int i = 1; i <= x; i++)
    {
        y *= i;
    }
    return y;
}
int main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    int res = findFact(num);
    printf("the ans is :  %d", res);
    return 0;
}