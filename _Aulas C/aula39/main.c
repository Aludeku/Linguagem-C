#include <stdio.h>
#include <stdlib.h>

int main()
{
    //break     -> interrompe o nosso ciclo
    //continue  -> interrompe o nosso laço

        for(int x = 0; x<=10; ++x)
        {
            //quando x == 20, interrompa somente o laço atual
            if (x == 2){
                continue;
            }

            //quando x == 80 o looping será finalizado
            if(x == 8){
                break;
            }


            printf ("%i\n", x);
        }
}
