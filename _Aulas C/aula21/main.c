#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 10;

    unsigned short int u;
    printf("%i -> vari�vel i\n", sizeof(i));
    printf("%i -> vari�vel u\n", sizeof(u));
    /*
        1)signed    ->   + e -
        2)unsigned  ->   +
        3)long      ->   aumentar a capacidade de armazenamento da vari�vel
        4)short     ->   diminuir o tamanho de armazenamento da var�vel
    */

    printf("Hello world!\n");
    return 0;
}
