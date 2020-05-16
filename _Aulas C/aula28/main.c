#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op, num1, num2, resultado;

    do{
        num1 = num2 = resultado = 1;    ///resetar as variaveis
        op = 1;
        ///imprimindo as opções da nossa calculadora
        printf("(1) somar\n");
        printf("(2) subtrair\n");
        printf("(3) multiplicar\n");
        printf("(4) dividir\n");
        printf("(5) sair do programa\n");

        puts("Informe a operação: ");
        scanf("%i", op);
            if (op==1)
            {
            puts("Digite o primeiro número: ");
                scanf("%i", &num1);
                puts("Digite o segundo número: ");
                scanf("%i", &num2);
                printf("%i", num1+num2);

            }
            else{
                puts("bad");
            }

    }while(op != '0');


    return 0;
}
