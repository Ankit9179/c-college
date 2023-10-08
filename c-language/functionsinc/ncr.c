// the formula or ncr = n!/r!(n-r)
#include <stdio.h>
#include <math.h>
// factorial function
int facto(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
// nCr function
int ncrFun(int n, int r)
{
    return facto(n) / facto(r) * facto(n - r);
}
int main()
{
    int n, r;
    printf("enter num of n : ");
    scanf("%d", &n);
    printf("enter num of r : ");
    scanf("%d", &r);
    int res = ncrFun(n, r);
    printf(" the ans is : %d", res);
    return 0;
}