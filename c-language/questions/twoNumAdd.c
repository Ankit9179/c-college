#include <stdio.h>
// function definition
int funcAddTowNum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{

    // function call
    int result = funcAddTowNum(5, 6);
    printf("%d", result);
    return 0;
}