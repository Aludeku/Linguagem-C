#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero 1: ");
    char c;
    c= getchar();

    if(c == '1')
    {
        puts("\nO caracter digitado est� correto.\n");
    }
    else
    {
        puts("O valor digitado � inv�lido.\n");
        printf("Voc� digitou o caracter %c.\n", c);

    }

    return 0;
}
