#include <stdio.h>
int isPalindrome(int n)
{
    int originalNum, remainder;
    int reverced = 0;
    originalNum = n; // sroting real num in the originalNum variable
    // reversing program
    while (n != 0)
    {
        remainder = n % 10; // 456 the the value will be 6
        reverced = reverced * 10 + remainder;
        n /= 10; // 543 = 54
    }
    if (originalNum == reverced)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}
void main()
{
    int i, checkedNum;
    int arr[] = {432, 556, 781, 909};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < length; i++)
    {
        checkedNum = arr[i];
        int result = isPalindrome(checkedNum);
        if (result == 1)
        {
            printf("%d is a pelindrome number", checkedNum);
        }
        else
        {
            printf("is not a palindrome number ");
        }
    }
}