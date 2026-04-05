#include<stdio.h>
#include "Exercício 3(lista).h"
#include "Exercício 3(pilha).h"
//menu principal, para exercicio 3: passa item de uma lista para uma pilha
main ()
{
    tipo_pilha pilha;
    tipo_lista lista;
    tipo_item item;
    int opt, cont;
    fazer_pilha_vazia (&pilha);// "esvazia" a pilha, deixando topo = min
    fazer_lista_vazia(&lista);//"esvazia" a pilha, deixandoprimeiro e ultimo = min
    do
    {
         opt = 0;// para se o usuario digitar letra, não repetir ultima opção e avisar digito invalido
         printf ("Exercicio de pilha:\n");
         printf ("O que deseja fazer:\n");
         printf ("1 - cadastra na lista.\n");
         printf ("2 - Imprimir lista.\n");
         printf ("3 - pesquisa lista.\n");
         printf ("4 - retirar da lista.\n");
         printf ("5 - empilhar lista.\n");
         printf ("6 - imprimeir pilha.\n");
         printf ("7 - desempilha tudo.\n");
         printf ("8 - sair.\n");
         scanf ("%d", &opt);
         fflush(stdin);//evita erro.
         switch (opt)
         {
                case 1:
                     cadastra(&lista);
                break;
                
                case 2:
                     imprime_lista(lista);
                break;
                
                case 3:
                    pesquisar(lista);
                break;
                
                case 4:
                     remover(&lista);
                break;
                
                case 5:
                     if (verificar_lista_vazia(lista))
                     {
                          printf ("lista vazia.\n");
                     }
                     else if(verificar_pilha_cheia(pilha))
                     {
                          printf ("pilha cheia.\n");
                     }
                     else
                     {
                         for (cont = min; cont < lista.ultimo; cont++)
                         {
                             item.chave = lista.item[cont].chave;
                             empilha (&pilha, item);
                         }
                         printf ("Empilado com sucesso.\n");
                     }
                break;
                
                case 6:
                     imprime_pilha (pilha);
                break;
                
                case 7:
                     desempilha_tudo (&pilha);
                break;
                
                case 8:
                     printf ("Voce esta saindo do programa.\n");
                break;
                
                default:
                     printf ("Digito invalido.\n");   
         }
         system ("pause");
         system ("cls");
    }
    while (opt != 8);
}
