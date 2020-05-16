#include <stdio.h>

int testar()
{
    int x = 10;
    return x;
}

int main()
{
    int x = 20;
    printf("%d", x);
    printf("%d", testar());

    return 0;
}
