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
        2) -= -> subtra��o
        3) *= -> multiplica��o
        4) /= -> divis�o
        5) %= -> resto da divis�o
    */

    int i = 50;
    printf("soma: %i\n", i+=100);
    printf("subtra��o: %i\n", i-=50);
    printf("multiplica��o: %i\n", i*=3);
    printf("divis�o: %i\n", i/=3);
    printf("resto: %i\n", i%=3);

    return 0;
}
