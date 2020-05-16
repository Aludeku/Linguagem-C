#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("O resultado da soma é: %i\n", soma);

    int subtracao = num2 - num1;
    printf("O resultado da subtração é: %i\n", subtracao );

    int multi = num1 * num2;
    printf( "O resultado da multiplicação é: %i\n", multi);

    int div = num2 / 3;
    printf("O resultado da divisão é %i", div);

    return 0;
}
