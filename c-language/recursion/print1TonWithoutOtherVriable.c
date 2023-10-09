#include <stdio.h>
void printNum(int n)
{
    if (n == 0) // terminate condition /base case
    {
        return;
    }
    printNum(n - 1);                 // call
    printf(" number is : %d \n", n); // work
}
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printNum(x); // 5
    return 0;
}