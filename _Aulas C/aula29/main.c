#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double num1, num2, resultado;
    char op = '0';

    do{
        num1, num2, resultado = 0;

        //imprimindo as opções da calculadora
        printf("(1) somar\n(2) subtrair\n(3) multiplicar\n(4) dividir\n(0) sair do programa");

        printf("Informe a operação: \n");
        op = getche();
        printf("\n")

        if(op!='0'){
            printf("Digite o primeiro número: \n\t ");
            scanf("%f", &num1);
            printf("Digite o segundo número: \n\t ");
            scanf("%f", &num2);
        }
    }while(op != '0');

    return 0;
}
