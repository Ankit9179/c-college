#include <stdio.h>
void sumO1ton(int n, int sum)
{
    if (n == 0) // base condition
    {
        printf("%d", sum);
        return;
    }
    sumO1ton(n - 1, sum + n); // call
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    sumO1ton(n, 0); // 5
    return 0;
}