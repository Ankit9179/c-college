#include <stdio.h>
void swapFunc(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("enter num x : ");
    scanf("%d", &x);
    printf("enter num y : ");
    scanf("%d", &y);
    printf("%d %d \n", x, y);
    // swap
    swapFunc(&x, &y); // pass the address of x,y
    printf("%d %d ", x, y);
    return 0;
}