#include<stdio.h>
//procura um número digitado em uma matriz, retornando1 caso tenha e 0 caso não
int Procura_Mat(int X, int A[4][4])
{
     int cont1, cont2, R = 0;
     for (cont1 = 0; cont1 < 4; cont1++)
     {
         for (cont2 = 0; cont2 < 4; cont2++)
         {
             if (X == A[cont1][cont2])
             {
                   R = 1;
             }
         }
     }
     return R;
}
main ()
{
     int cont1, cont2, num[4][4], X, R;
     for (cont1 = 0; cont1 < 4; cont1++)
     {
         for (cont2 = 0; cont2 < 4; cont2++)
         {
             printf("Digite um numero: ");
             scanf ("%d", &num[cont1][cont2]);
         }
     }
     printf("Digite um numero para ser buscado na matriz: ");
     scanf ("%d", &X);
     R = Procura_Mat (X, num);
     if (R == 1)
     {
           printf("Existe %d na matriz\n", X);
     }
     else
     {
           printf("Nao existe %d na matriz\n", X);
     }
     system ("pause");
}
