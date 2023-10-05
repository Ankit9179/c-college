#include <stdio.h>
int main()
{
    /// our code will stare from here
    // declaration variable
    float p, r, t, si;
    printf("enter principal number : ");
    scanf("%f", &p);
    printf("enter rate  : ");
    scanf("%f", &r);
    printf("enter time  : ");
    scanf("%f", &t);
    // calculation for si
    si = (p * r * t) / 100;
    printf("your simple interest is : %f", si); // for printing si
    return 0;
}