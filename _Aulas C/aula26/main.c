#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número 1: ");
    char c;
    c= getchar();

    if(c == '1')
    {
        puts("\nO caracter digitado está correto.\n");
    }
    else
    {
        puts("O valor digitado é inválido.\n");
        printf("Você digitou o caracter %c.\n", c);

    }

    return 0;
}
