#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //scanf("tipo_de_entrada", &variavel_que_recebera);
    //scanf("%tipo1%tipo2", &var1, &var2);
    int num1, num2;
    printf("Por favor, digite um número: \n");
    scanf("%i", &num1);

    printf("O número digitado foi: %i", num1);

    return 0;
}
