#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 10;

    printf("Digite um número != de 5: \n");
    scanf("%i", &i);


    if(i!=5)
    {
        printf("A expressão é:\n");
        printf("\tTRUE\n");
    }
    else
    {
        printf("A expressão é:\n");
        printf("\tFALSE\n");
    }

    return 0;
}
