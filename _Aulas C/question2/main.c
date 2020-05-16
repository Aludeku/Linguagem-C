#include <stdio.h>
#include <stdlib.h>

int pensar(int* a, int* b)
{
    a = 10;
    b = 20;
    return 0;
}
int main (){
    int a = - 30;
    int b = - 40;
    pensar(&a,&b);
    printf("\n a = %d e b = %d",a,b);
    return 0;
}
