#include <stdio.h>
#include <stdbool.h>

typedef struct pilha
{
    int max;
    int topo;
    int *item;
} * Pilha;

Pilha create(int m)
{
    Pilha p = malloc(sizeof(struct pilha));
    p->topo = -1;
    p->max = m;
    p->item = malloc(m * sizeof(int));

    return p;
}

bool isEmpty(Pilha p)
{
    return p->topo == -1;
}

bool isFull(Pilha p)
{
    return p->topo == p->max - 1;
}

void push(Pilha p, int x)
{
    if (isFull(p))
    {
        puts("Pilha cheia");
    }
    else
    {
        p->topo++;
        p->item[p->topo] = x;
    }
}

int pop(Pilha p)
{
    if (isEmpty(p))
    {
        puts("Pilha vazia");
        return NULL;
    }
    else
    {
        int x = p->item[p->topo];
        p->topo--;
        return x;
    }
}

int topo(Pilha p)
{
    if (isEmpty(p))
    {
        puts("Pilha vazia");
    }
    else
    {
        return p->item[p->topo];
    }
}

void destroy(Pilha *Q)
{
    free((*Q)->item);
    free(*Q);
    *Q = NULL;
}