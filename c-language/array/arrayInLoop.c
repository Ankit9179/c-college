#include <stdio.h>
int main()
{
    // int arr[3]; // declaration
    // int arr[0] = 4;
    // int arr[1] = 5;
    // int arr[2] = 6;
    // int arr[] = {1, 2, 3, 4}; // declaration + initilization
    int arr[4] = {1, 2, 3, 4}; // declaration + initilization
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}