#include <stdio.h>
int main()
{
    int arr[5];
    // taking input from user for array
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printing output
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}