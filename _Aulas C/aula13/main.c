#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma, subtracao, multi, div;
    puts("Calculadora burra de C \n");

    puts("Digite o primeiro n�mero: ");
    scanf("%i", &num1);
    puts("Digite o segundo n�mero: ");
    scanf("%i", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("A soma �: %i\n", soma);
    printf("A subtra��o �: %i\n", subtracao);
    printf("A multiplica��o �: %i\n", multi);
    printf("A divis�o �: %i\n", div);

    return 0;
}
