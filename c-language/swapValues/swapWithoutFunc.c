// swap value with the help of  third  variable
#include <stdio.h>
int main()
{
    int x, y, temp;
    printf("Enter value x : ");
    scanf("%d", &x);
    printf("Enter value y : ");
    scanf("%d", &y);
    printf("%d %d \n", x, y); // 1,2
                              // swap values
    x = x + y;                // 1+2 = 3
    y = x - y;                // 3-2 = 1
    x = x - y;                // 3-1 = 2

    printf("%d %d", x, y); // 1,2
    return 0;
}