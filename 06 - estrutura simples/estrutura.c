#include<stdio.h>
#include<string.h>
//este programa simula uma agenda
typedef struct tell_cad {int DDD; int num;} tell_cad;
typedef struct end_cad {char rua[30]; char bairro[30];} end_cad;
typedef struct agend_cad {char nome[30]; tell_cad tell; end_cad end; char cidade[30]; char mail[40];} agend_cad;

agend_cad pessoa[200];
int i = 0;

//cadastra os dados na agenda
cadastrar ()
{
    printf ("Digite o nome: ");
    fflush(stdin);
    gets (pessoa[i].nome);
    printf ("Digite o DDD: ");
    scanf ("%d", &pessoa[i].tell.DDD);
    printf ("Digite o numero do telefone: ");
    scanf ("%d", &pessoa[i].tell.num);
    printf ("Digite a rua: ");
    fflush(stdin);
    gets (pessoa[i].end.rua);
    printf ("Digite o bairro: ");
    fflush(stdin);
    gets (pessoa[i].end.bairro);
    printf ("Digite a cidade: ");
    fflush(stdin);
    gets (pessoa[i].cidade);
    printf ("Digite o E-mail: ");
    fflush(stdin);
    gets (pessoa[i].mail);
    i++;
    system ("pause");
    system ("cls");
}

//pesquisandopelo nome
buscar ()
{
    char nome[30];
    int cont, R;
    printf ("Digite o nome de quem deseja buscar os dados: ");
    fflush (stdin);
    gets (nome);
    for (cont = 0; cont < i; cont++)
    {
        R = strcmp (nome, pessoa[cont].nome);
        if (R == 0)
        {
            printf ("Nome: %s\n", pessoa[cont].nome);
            printf ("DDD: %d\n",pessoa[cont].tell.DDD);
            printf ("Telefone: %d\n", pessoa[cont].tell.num);
            printf ("Rua: %s\n", pessoa[cont].end.rua);
            printf ("Bairro: %s\n", pessoa[cont].end.bairro);
            printf ("Cidade: %s\n", pessoa[cont].cidade);
            printf ("E-mail: %s\n", pessoa[cont].mail);
            system ("pause");
            system ("cls");
            return;
        }
    }
    printf ("nao ha este nome cadastrado.\n");
    system ("pause");
    system ("cls");
}
main ()
{
     int opc;
     do
     {
         printf ("O que deseja fazer:\n");
         printf ("1 - cadastrar alguem na agenda:\n");
         printf ("2 - procurar alguem na agenda:\n");
         printf ("3 - para sair:\n");
         scanf ("%d", &opc);
         switch (opc)
         {
             case 1:
                  cadastrar ();
             break;
             
             case 2:
                  buscar ();
             break;
             
             case 3:
                  printf ("voce esta saindo deste programa.\n");
             break;
             
             default:
                  printf ("Digito invalido.\n");
                  system ("pause");
                  system ("cls");
         }
     }
     while(opc != 3);
     system ("pause");
}
