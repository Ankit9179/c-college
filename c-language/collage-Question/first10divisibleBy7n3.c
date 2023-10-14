// first 10 natural num bivisible by 3 and 7
#include <stdio.h>
int main()
{
    int t, s, counter;
    t = 3;
    s = 7;
    counter = 1;

    for (int i = 1; counter <= 10; i++)
    {
        if (i % 3 == 0)
        {
            printf("divisible by three : %d \n", i);
            counter++; // counter increase just like that loop runs many time
        }
    }

    return 0;
}