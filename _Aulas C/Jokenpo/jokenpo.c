#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, bot;
	setlocale(LC_ALL, "Portuguese");
	system("color 5");
	printf("\nJO KEN PO!\n");
	srand(time(NULL));
	bot = rand() % 3+1;  //número aleatório gerado pelo cpu
	
do
{
	printf("Digite:\n\n1-PEDRA\n2-PAPEL\n3-TESOURA:\n");
	scanf("%d", &n);
}while(n<1 || n>3);
	if (n==1)
	{
		printf("Você escolheu Pedra");
	}
	if (n==2)
	{
		printf("Você escolheu Papel");
	}
	if (n==3)
	{
		printf("Você escolheu Tesoura");
	}

	switch(bot)
	{
		case 1: 
			printf("\nO bot escolheu Pedra");
			break;
		case 2:
			printf("\nO bot escolheu Papel");
			break;
		case 3:
			printf("\nO bot escolheu Tesoura");
			break;
	}

	if ((n==1 && bot==3) || (n==2 && bot==1) || (n==3 && bot== 2))
		{
			printf("\nVocê Venceu!\n");
		}
	if (n == bot)
		{
			printf("\nEmpate!\n");
		}
	if ((n==1 && bot==2) || (n==2 && bot==3) || (n==3 && bot== 1))
		{
			printf("\nO bot venceu!\n");
		}
		return 0;
}
