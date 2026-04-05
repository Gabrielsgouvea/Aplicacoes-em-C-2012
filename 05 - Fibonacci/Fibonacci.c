#include<stdio.h>
int main (void)
{
    int num, cont, phi1 = 1, phi2 = 2;
    printf ("digite o ultimo numero de uma sequencia fibonacci: ");
    scanf ("%d", &num);
    for(cont = phi1; cont <= num; cont = phi1 + phi2)
    {
        printf ("%d\n", cont);
        phi1 = cont - phi1;
        phi2 = cont;
    }
    system ("pause");
    return 0;
}
