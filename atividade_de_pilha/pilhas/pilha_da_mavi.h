#include <stdio.h>
#include <stdlib.h>

typedef char Item;

typedef struct  pilha{
    int max ;
    int topo;
    Item *item ;
}*Pilha;


Pilha pilha (int m){
    Pilha pilha = (Pilha) malloc(sizeof(struct pilha));
    pilha -> max = m;
    pilha -> topo = -1;
    pilha -> item = (Item*) malloc (sizeof(Item) *m);

    return pilha;

}


int vaziap(Pilha P){
	if(P-> topo == -1)return 1;
    else return 0;
	}
int cheiap(Pilha P){
    if(P->topo == P->max-1) return 1;
    else return 0;
}

void empilha(Item x, Pilha P){ //push

    if(!cheiap(P)) {
        P-> topo++;
        P->item[P->topo]=x;
    }
}


Item desempilha (Pilha P){ //pop
    if(!vaziap(P)) {
        Item x= P -> item[P-> topo];
        P-> topo --;
        return x;
    }
}


Item topo (Pilha P) {
    if(!vaziap(P)) {
        return P-> item [P->topo];
    }
}


void destroip(Pilha *Q){
    free ((*Q)-> item);
    free (*Q);
    *Q = NULL;
}