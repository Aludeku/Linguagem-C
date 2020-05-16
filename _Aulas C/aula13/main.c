#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma, subtracao, multi, div;
    puts("Calculadora burra de C \n");

    puts("Digite o primeiro número: ");
    scanf("%i", &num1);
    puts("Digite o segundo número: ");
    scanf("%i", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("A soma é: %i\n", soma);
    printf("A subtração é: %i\n", subtracao);
    printf("A multiplicação é: %i\n", multi);
    printf("A divisão é: %i\n", div);

    return 0;
}
