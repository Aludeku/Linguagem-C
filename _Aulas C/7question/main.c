#include <stdio.h>

int* retornarVetor(){
    static int v[10];
    int a;
    for(a=0; a<10; ++a){
        v[a] = 2*a;
    }
    return v;
}
int main()
{
    int*p;
    p = retornarVetor();
    printf("Valor = %d",*(p+2));
    return 0;
}
