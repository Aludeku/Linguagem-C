#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int iJ, iI;
    iJ = 17;
    iI = 60;

    int idade = 0;

    puts("Digite a idade de uma pessoa: ");
    scanf("%i", &idade);

    if(idade <= iJ)
    {
        puts("A idade informada é de um jovem.");
    }else{
        if(idade >=iI){
            puts("A idade informada é de uma pessoa idosa.");
        }else{
            if((idade >iJ)&&(idade <iI)){
                    //Adulto == pessoa mais de 17 anos && menos de 60;
                puts("A idade informada é de um adulto.");
            }
        }
    }


    return 0;
}
