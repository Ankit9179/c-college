// multiply two num without multiply sign
#include <stdio.h>
int main()
{
    int n, m, res;
    res = 0; //
    printf("print num of n : ");
    scanf("%d", &n);
    printf("print num of m : ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        res += n; // res+n m times
    }
    printf("The answer is : %d", res);
    return 0;
}