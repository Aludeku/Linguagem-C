#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um valor entre 0 e 9: \n");
    int i;
    scanf("%i", &i);

    switch(i){

case 0:
    printf("A op��o digitada foi 'zero' ");
    break;

case 1:
    printf("A op��o digitada foi 'um'");
    break;
case 2:
    printf("A op��o digitada foi 'dois'");
    break;
case 3:
    printf("A op��o digitada foi 'tr�s'");
    break;
case 4:
    printf("A op��o digitada foi 'quatro'");
    break;
case 5:
    printf("A op��o digitada foi 'cinco'");
    break;
case 6:
    printf("A op��o digitada foi 'seis'");
    break;
case 7:
    printf("A op��o digitada foi 'sete'");
    break;
case 8:
    printf("A op��o digitada foi 'oito'");
    break;
case 9:
    printf("A op��o digitada foi 'nove'");
    break;

    default:
        puts("Op��o default");
    }

    return 0;
}
