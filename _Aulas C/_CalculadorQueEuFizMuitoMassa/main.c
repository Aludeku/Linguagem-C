#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, option;
    char leave = 'y';

    while (leave == 'y' || leave == 'Y')
    {
        printf("Type the first number: ");
            scanf("%i", &num1);
        printf("Type the second number: ");
            scanf("%i", &num2);
        printf("Select which mathematic operation do you want to execute: \n");
        printf("\t[1]Sum\n\t[2]Subtraction\n\t[3]Multiplication\n\t[4]Division: ");
        scanf("%i", &option);

    if (option == 1)
    {
        printf("\nThe result is: %i\n\n", num1+num2);
    }
    if (option == 2)
    {
        printf("\nThe result is: %i\n\n", num1-num2);
    }
    if (option == 3)
    {
        printf("\nThe result is: %i\n\n", num1*num2);
    }
    if (option == 4)
    {
        printf("\nThe result is: %i\n\n", num1/num2);
    }
    printf("Do you wanna continue? [y/n]:");
    scanf("%s", &leave);
        if (leave == 'y' || leave == 'Y')
    {
        puts("Continuing...");
    }
        else{
            puts("Closing programm...");
            break;
        }
    }
    return 0;
}
