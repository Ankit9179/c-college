#include <stdio.h>
int main()
{
    int x;
    printf("give me a number : ");
    scanf("%d", &x);
    // check condition for devisible by 7 or not
    if (x % 7 == 0)
    {
        printf(" the num %d is devisible by 7 ", x);
    }
    else
    {
        printf(" the num %d is not devisible by 7 ", x);
    }
    return 0;
}