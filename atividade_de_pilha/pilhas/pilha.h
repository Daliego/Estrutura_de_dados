#include <stdio.h>
#include <stdlib.h>


struct Pilha {

	int topo; /* posiÃ§Ã£o elemento topo */
	int capa;
	float *pElem;

};

void pilha( struct Pilha *p, int c ){

   p->topo = -1;
   p->capa = c;
   p->pElem = (float*) malloc (c * sizeof(float));

}
int vaziap ( struct Pilha *p ){

   if( p-> topo == -1 )

      return 1;   // true

   else

      return 0;   // false

}

int cheiap ( struct Pilha *p ){

	if (p->topo == p->capa - 1)

		return 1;

	else

		return 0;

}

void empilha ( struct Pilha *p, float v){

	p->topo++;
	p->pElem [p->topo] = v;

}

float desempilha ( struct Pilha *p ){

   float aux = p->pElem [p->topo];
   p->topo--;
   return aux;

}

float topo ( struct Pilha *p ){

   return p->pElem [p->topo];

}

/* void destroip(Pilha *Q){
    free ((*Q)-> item);
    free (*Q);
    *Q = NULL;
 */