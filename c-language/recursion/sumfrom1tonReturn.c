#include <stdio.h>
int sumNum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    printf("enter a num of n : ");
    scanf("%d", &n);
    printf("%d", sumNum(n));
    return 0;
}