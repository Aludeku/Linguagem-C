#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char c;
    puts("Digite uma letra min�scula: ");
    scanf("%c", &c);

    if(c>='a')
    {
        printf("A letra que voc� digitou em mai�scula foi: %c\n", toupper(c));
    }

    return 0;
}
