// some of 20 first natural odd nums
#include <stdio.h>
int main()
{
    int sum = 0; // enpty variable
    for (int i = 1; i <= 40; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
            printf("%d\n", i); // numbers printing
        }
    }

    printf("sum id : %d", sum); // some of numbers
    return 0;
}