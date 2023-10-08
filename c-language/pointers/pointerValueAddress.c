#include <stdio.h>
int main()
{
    int x = 5;
    int *z = &x;         // create a  new variable for storing address of  x
    printf("%d \n", x);  // print value of x
    printf("%p \n", z);  // print address of z
    printf("%d \n", *z); // print value with pointer *dereference oprator
    return 0;
}