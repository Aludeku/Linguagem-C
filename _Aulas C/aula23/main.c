#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x               = 0;
    int valDigitado     = 0;

    puts("Informe a quantidade de X que você deseja repetir a função:");
    scanf("%i", &valDigitado);

    while(x < valDigitado){
        printf("%i\n", x * 10);
        x++;
    }

    return 0;
}
