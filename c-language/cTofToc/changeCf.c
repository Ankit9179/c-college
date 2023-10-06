#include <stdio.h>
int main()
{
    int userInputNum, f, c, resC, resF;
    printf("for change c to f press 1 or press 2 for f to c : "); // asking from user that what he want?
    scanf("%d", &userInputNum);                                   // taking input from user
    if (userInputNum == 1)
    {
        printf("Enter a num for c : ");
        scanf("%d", &c);
        resF = c * (9 / 5) + 32;
        printf("your output is :- %d", resF);
    }
    if (userInputNum == 2)
    {
        printf("Enter a num for f : ");
        scanf("%d", &f);
        resC = 5 / 9 * f - 32;
        printf("your output is :- %d", resC);
    }
    else
    {
        printf("something is wrong"); // it will print when your gives a number rather than 1 and 2
        return 0;
    }

    printf("%d", userInputNum);
    return 0;
}