#include<stdio.h>
toascii (char caracter)
{
    int num;
    num = caracter;
    printf ("O codigo ascii de (%c) e (%d)\n", caracter, num);
}

tobinary(char caracter)
{
    int num1, num2, binary[10], n = 0, cont;
    num1 = caracter;
    num2 = num1;
    do
    {
       num1 = num1 % 2;
       num2 = num2 / 2;
       binary[n] = num1;
       num1 = num2;
       n = n + 1;
    }
    while (num2 > 1);    
    printf ("\nE o binario e: ");
    printf ("%d", num2);
    for (cont = (n - 1); cont >= 0; cont--)
    {
       printf ("%d", binary[cont]);
    }
    puts("");
}

int main ()
{
    char caracter;//caracter a ser trabalhado
    printf ("Digite um caracter para saber seu codigo ascii e binario:\n");
    scanf ("%c", &caracter);
    system ("cls");
    toascii (caracter);
    tobinary (caracter);
    system ("pause");
    return 0;
}
