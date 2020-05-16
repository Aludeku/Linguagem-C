#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num;
    int ans = 1;
    int ask = 1;

    setlocale(LC_ALL, "Portuguese");
    system("color D");
    printf("\t\t\t\t\t\tTABUADA MASSA!\n");

    puts("Digite o número qual você deseja ver a tabuada: ");
    scanf("%i", &num);
        for (int zer = 0; zer<=10; zer++)
        {
            printf("\t%i x %i = %i\n", num, zer, num*zer);
        }

    return 0;
}
