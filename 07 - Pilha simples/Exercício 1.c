#include<stdio.h>
#include "Exercício 1.h"
//menu principal, para exercicio 1: função desempilha tudo
main ()
{
    tipo_pilha pilha;
    tipo_item item;
    int opt;
    fazer_pilha_vazia (&pilha);// "esvazia" a pilha, deixando topo = min
    do
    {
         opt = 0;// para se o usuario digitar letra, não repetir ultima opção e avisar digito invalido
         printf ("Exercicio de pilha:\n");
         printf ("O que deseja fazer:\n");
         printf ("1 - empilhar.\n");
         printf ("2 - Imprimir.\n");
         printf ("3 - desempilhar.\n");
         printf ("4 - pposicao do ultimo empilhado.\n");
         printf ("5 - desempilhar tudo.\n");
         printf ("6 - para sair.\n");
         scanf ("%d", &opt);
         fflush(stdin);//evita erro.
         switch (opt)
         {
                case 1:
                     cadastra(&pilha);
                break;
                
                case 2:
                     imprime(pilha);
                break;
                
                case 3:
                     desempilha(&pilha);
                break;
                
                case 4:
                     tamanho(pilha);
                break;
                
                case 5:
                     desempilha_tudo (&pilha);
                break;
                
                case 6:
                     printf ("voca esta saindo do programa.\n");
                break;
                
                default:
                     printf ("Digito invalido.\n");   
         }
         system ("pause");
         system ("cls");
    }
    while (opt != 6);
}
