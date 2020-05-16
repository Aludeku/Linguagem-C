#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char c;
    puts("Digite uma letra minúscula: ");
    scanf("%c", &c);

    if(c>='a')
    {
        printf("A letra que você digitou em maiúscula foi: %c\n", toupper(c));
    }

    return 0;
}
