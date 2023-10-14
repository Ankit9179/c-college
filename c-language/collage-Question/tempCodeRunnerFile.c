// some of 20 first natural num
#include <stdio.h>
int main()
{
    int sum;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}