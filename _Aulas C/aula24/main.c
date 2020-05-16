#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int x = 0;
    //x = x + 1;
    //x += 1;
    //x++;

    while(x <= 10){
        printf("%i\n", x);
        x += 1;
    }
    /*
        1) += -> soma
        2) -= -> subtração
        3) *= -> multiplicação
        4) /= -> divisão
        5) %= -> resto da divisão
    */

    int i = 50;
    printf("soma: %i\n", i+=100);
    printf("subtração: %i\n", i-=50);
    printf("multiplicação: %i\n", i*=3);
    printf("divisão: %i\n", i/=3);
    printf("resto: %i\n", i%=3);

    return 0;
}
