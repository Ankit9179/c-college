// write a program - multiply all element in the array

#include <stdio.h>

int main()
{
    int newNum = 1;
    int arr[] = {3, 5, 6, 7, 8};             // array declaration
    int size = sizeof(arr) / sizeof(arr[0]); // size of the array = 5

    for (int i = 0; i < size; i++)
    {
        newNum *= arr[i];
    }
    printf("%d", newNum);
    return 0;
}