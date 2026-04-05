#include<stdio.h>
#define min 0
#define max 100
//implementando uma lista e uma pilha que recebera seus valores
typedef struct {int chave;} tipo_item_lista;
typedef struct {tipo_item_lista item[max]; int primeiro, ultimo;} tipo_lista;//lista


void fazer_lista_vazia(tipo_lista *lista)
// faz a lista vazia, fazendp primeiro e ultimo = min
{
    lista->primeiro = min;
    lista->ultimo = min;
}

int verificar_lista_vazia(tipo_lista lista)
//verifica se a lista esta vazia, e retorna o resultado
{
    return (lista.ultimo == min);
}


int verificar_lista_cheia(tipo_lista lista)
//verifica se a lista esta cheia, e retorna o resultado
{
    return (lista.ultimo == max);
}

void cadastra (tipo_lista *lista)
//cadastrando um item e na lista
{
    tipo_item_lista item;
    if (verificar_lista_cheia(*lista))
    {
          printf ("lista cheia.\n");
    }
    else
    {
          printf ("digite a chave: \n");
          scanf ("%d", &item.chave);
          inserir (lista, item);
    }
}

int inserir (tipo_lista *lista, tipo_item_lista item)
//insere um item na lista
{
    lista->item[lista->ultimo] = item;
    lista->ultimo++;
}

void remover (tipo_lista *lista)
//digitando o item que deseja removver da lista
{
     int num;
     if (verificar_lista_vazia(*lista))
     {
          printf ("Lista vazia.\n");
     }
     else
     {
          printf ("Digite o numero do item que deseja remover:\n");
          scanf ("%d", &num);
          remover_lista (num, lista);
     }
}

remover_lista (int num, tipo_lista *lista)
//removendo item da lsita
{
     int cont, cont2, R = 0;
     for (cont = min; cont < lista->ultimo; cont++)
     {
         if (num == lista->item[cont].chave)
         {
              R = 1;
              cont2 =cont;
              break;
         }
     }
     if (R == 1)
     {
          for (cont = cont2; cont < lista->ultimo; cont++)
          {
              lista->item[cont] = lista->item[cont + 1];
          }
          lista->ultimo--;
          printf ("Removido com sucesso!\n");
     }
     else
     {
         printf ("Nao encontrado\n");
     }
}

void imprime_lista (tipo_lista lista)
//imprime todo o conteudo da lista
{
    int cont;
    if (verificar_lista_vazia(lista))
    {
          printf ("A lista esta vazia.\n");
    }
    else
    {
          printf ("lista.\n");
          for (cont = min; cont < lista.ultimo; cont++)
          {
              printf ("Item: %d.\n", lista.item[cont].chave);
          }
    }
}

pesquisar(tipo_lista lista)
//pede uma chave para pesquisar se um item x foi cadastrado
{
    int num;
    if (verificar_lista_vazia(lista))
    {
          printf ("Lista vazia.\n");
    }
    else
    {
          printf ("Digite uma chave para pesquisa:  ");
          scanf ("%d", &num);
          procurar (lista,num);
    }
}

procurar (tipo_lista lista, int num)
{
      int cont, achar;
      for (cont = min; cont < lista.ultimo; cont++)
      {
          if (lista.item[cont].chave == num)
          {
               achar = 1;
               break;
          }
      }
      if (achar == 1)
      {
          printf ("chave: %d\n", lista.item[cont].chave);
      }
      else
      {
         printf ("Não encontrado.\n");
      }
}
