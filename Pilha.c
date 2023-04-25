/* Importa Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100
/* Define a estrutura. */
typedef struct 
{
    int Item[MAXTAM]; /* Tamanho Máximo. */
    int Topo; /* Topo. */
} TPilha; /* Nome da Estrutura. */
/* Iniciar a pilha */
void Tpilha_Inicia(TPilha *p)
{
    p -> Topo = -1; /* Pilha inicia vazia. */
}
/* Verifica se a Pilha está vazia. */
int TPilha_Vazia(TPilha *p) 
{
    if (p -> Topo == -1) {
        return 1;
    }
    else {
        return 0;
    }
}
/* Verifica se a Pilha está cheia. */
int TPilha_Cheia(TPilha *p)
{
    if (p -> Topo == MAXTAM-1) {
        return 1;
    }
    else {
        return 0;
    }
}
/* Insere elementos na pilha. */
void TPilha_Insere (TPilha *p, int x) 
{
    if (TPilha_Cheia(p) == 1)
    {
        printf("\nERRO: Pilha Cheia");
    }
    else
    {
        p -> Topo++;
        p -> Item[p -> Topo] = x;
    }
}
/* Retira eleentos da pilha. */
int TPilha_Retira (TPilha *p) 
{
    int aux;
    if (TPilha_Vazia(p) == 1)
    {
        printf("\nERRO: Pilha Vazia");
    }
    else
    {
        aux = p -> Item[p -> Topo];
        p -> Topo--;
        return aux;
    }
}
/* Programa Principal. */
int main()
{
    TPilha *p = (TPilha*)malloc(sizeof(TPilha)); /* Alocação de espaço na memória*/
   /*Inicialização da pilha. */
    Tpilha_Inicia(p);
   /*Inserção de elementos na Pilha*/
    TPilha_Insere(p, 1);
    TPilha_Insere(p, 2);
    TPilha_Insere(p, 3);
    /*Remoção de elementos da Pilha*/
    int aux;
    aux = TPilha_Retira(p);
    printf("\n SAIU %d", aux);
    aux = TPilha_Retira(p);
    printf("\n SAIU %d", aux);
    aux = TPilha_Retira(p);
    printf("\n SAIU %d", aux);
    aux = TPilha_Retira(p);
    printf("\n SAIU %d", aux);

    return 0;
}
/*
void - usada quando a função não retorna nenhum valor
tipo nome(){} - usado para retornar valores
*/