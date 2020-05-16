#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;
    puts("\t\t\t\tMédia Escolar fraquinha fraquinha\n");

    printf("Digite a sua primeira nota bimestral: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota bimestral: ");
    scanf("%f", &nota2);
    printf("Digite a sua terceira nota bimestral: ");
    scanf("%f", &nota3);
    printf("Digite a sua quarta nota bimestral: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A sua média escolar foi de: %f\n", media);

    if(media >= 7)
    {
        puts("\tAprovado irra!");
    }
    else
    {
        puts("\tburro;");
    }


    return 0;
}
