#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int digi;
	system("color 5");
	setlocale(LC_ALL, "Portuguese");
	printf("Vin�cius gosta da vit�ria la la la la la\n");
	printf("Mulh� mano mulh�..\n\n");
	printf("1-N�o\n");
	printf("2-N�o\n");
	printf("Digita: ");
	scanf("%d", &digi);
	if (digi<=2)
	{
		printf("\nGay???\n");
	}
	if (digi==0)
	{
		system("color 3");
		printf("\nPara.\n\n");
	}
	if (digi>2)
	{
		system("color C");
		printf("\nAluno Reprovado\n\n");
	}
	system("pause");
	return 0;
}
