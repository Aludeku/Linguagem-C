#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void teste(void);

int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL,"Portuguese");
	printf("Exemplo de função\n");
	teste();
	teste();
	printf("Fim\n");
	system("pause");
	return 0;
}

void teste(void)
{
	printf("\nAludeku & the goddess\n");
}
