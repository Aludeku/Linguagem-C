#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0;

    while(i<10){
        printf("%i\n", i);
        i++;
    }

    return 0;
}
