#include <stdio.h>
void printNum(int n)
{
    if (n == 0) // terminate condition
    {
        return;
    }
    printf(" number is : %d \n", n);
    printNum(n - 1);
}
int main()
{
    int x;
    printf("Enter a number for hello : ");
    scanf("%d", &x);
    printNum(x);
    return 0;
}