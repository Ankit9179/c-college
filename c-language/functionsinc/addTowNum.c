#include <stdio.h>
// function
int addFunc(int x, int y)
{
    int sumOfNum = x + y;
    return sumOfNum;
}
int main()
{
    // call function and store value of return value
    int firstNum, secondNum;
    printf("Enter first num : ");
    scanf("%d", &firstNum);
    printf("Enter second num : ");
    scanf("%d", &secondNum);
    int res = addFunc(firstNum, secondNum); // store res
    printf(" the sum of : %d ", res);

    return 0;
}