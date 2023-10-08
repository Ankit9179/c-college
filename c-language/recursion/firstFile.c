#include <stdio.h>
void sayhello(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("hello\n");
    sayhello(n - 1);
}
int main()
{
    int x;
    printf("Enter a number for hello : ");
    scanf("%d", &x);
    sayhello(x);
    return 0;
}