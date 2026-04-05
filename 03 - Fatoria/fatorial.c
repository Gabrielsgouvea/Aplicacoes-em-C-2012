#include<stdio.h>
int main (void)
{
    int num, cont, r = 1;
    printf ("Digite um numero:\n");
    scanf ("%d", &num);
    cont = num;
    do
    {
        r = r * cont;
        cont--;
    }
    while (cont >= 1);
    printf ("o fatorial de %d e = %d\n",num, r);
    system ("pause");
    return 0;
}
