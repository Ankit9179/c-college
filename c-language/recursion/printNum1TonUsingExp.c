#include <stdio.h>
void printNum(int x, int n)
{
    if (x > n) // terminate condition /base case
    {
        return;
    }
    printf(" number is : %d \n", x); // work
    printNum(x + 1, n);              // call
}
int main()
{
    int x;
    printf("Enter a number for hello : ");
    scanf("%d", &x);
    printNum(1, x);
    return 0;
}