#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//a linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
	system("color 5");
	printf("Olá mundo\n");
	system("pause");
	//a linha abaixo limpa a tela
	system("cls");
	printf("Aludeku The Goodboy\n");
	system("pause");
	return 0;
}
