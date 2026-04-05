int main()
{
    int num, r, cont, result = 0;
    printf ("Digite um numero para saber se e primo: ");
    scanf ("%d", &num);
    for (cont = 2; cont < num; cont++)
    {
        r = num % cont;

        if (r == 0)
        {
                ++result;
        }
    }
    if (result == 0)
    {
               printf ("%d e primo\n", num);
    }
    else
    {
               printf ("%d nao e primo\n", num);
    }
    system ("pause");
}
