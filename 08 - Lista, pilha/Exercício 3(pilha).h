#include<stdio.h>
#define min 0
#define max 100
//implementando uma fila e uma pilha que recebera seus valores
typedef struct {int chave;} tipo_item;
typedef struct {tipo_item item[max]; int topo;} tipo_pilha;//pilha

void fazer_pilha_vazia(tipo_pilha *pilha)
// faz a pilha vazia, fazendp topo = min
{
    pilha->topo = min;
}


int verificar_pilha_vazia(tipo_pilha pilha)
//verifica se a pilha esta vazia, e retorna o resultado
{
    return (pilha.topo == min);
}

int verificar_pilha_cheia(tipo_pilha pilha)
//verifica se a pilha esta cheia, e retorna o resultado
{
    return (pilha.topo == max);
}


int empilha (tipo_pilha *pilha, tipo_item item)
//empilha um item no topo
{
    pilha->item[pilha->topo] = item;
    pilha->topo++;
}

void desempilha (tipo_pilha *pilha)
//desempilha um item do topo
{
    tipo_item item;
    if (verificar_pilha_vazia(*pilha))
    {
          printf ("A pilha esta vaziaz.\n");
    }
    else
    {
          item = pilha->item[pilha->topo - 1];
          pilha->topo--;
          printf ("O elemento %d foi retirado.\n", item.chave);
    }
}

void imprime_pilha (tipo_pilha pilha)
//imprime todo o conteudo da pilha
{
    int cont;
    if (verificar_pilha_vazia(pilha))
    {
          printf ("A pilha esta vazia.\n");
    }
    else
    {
          printf ("pilha.\n");
          for (cont = (pilha.topo - 1); cont >= 0; cont--)
          {
              printf ("Item: %d.\n", pilha.item[cont].chave);
          }
    }
}


int tamanho (tipo_pilha pilha)
//retorna a posição do ultimo da pilha
{
    if (verificar_pilha_vazia(pilha))
    {
          printf ("A pilha esta vaziaz.\n");
    }
    else
    {
         printf("ultima posicao: %d.\n", pilha.topo - 1);
    }
}

void desempilha_tudo (tipo_pilha *pilha)
//faz a pilha vazia
{
    int cont;
    if (verificar_pilha_vazia(*pilha))
    {
          printf ("A pilha esta vazia.\n");
    }
    else
    {
        for (cont = (pilha->topo - 1); cont >= min; cont--)
        {
            desempilha (pilha);
        }
    }
}
