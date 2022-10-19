#include <stdlib.h>
#include <iostream>
#define fmt "%d"

using namespace std;

typedef int Item;
typedef struct no {
    Item item;
    no* prox;
} *Lista;

Lista include(Item x, Lista lista) {
    Lista nova = (Lista)malloc(sizeof(Lista));
    nova->item = x;
    nova->prox = lista;
    return nova;
}

int ocorrencia(int numero, Lista lista) {
    int numeroDeRepeticoes = 0;
    while (lista != NULL) {
        if (lista->item == numero){
            numeroDeRepeticoes++;
        }
        lista = lista->prox;

    }
    return numeroDeRepeticoes;
}

Item ultimo(Lista lista) {
    while (lista->prox != NULL) {
        if (lista->prox == NULL){
            return lista->item;
        }
        lista = lista->prox;
    }
}

int soma(Lista lista) {
    if (lista != NULL) {
        return lista->item + soma(lista->prox);
    } else {
        return 0;
    }
}

void substituir(Item x, Item y, Lista lista) {
   if (lista != NULL) {
        if (lista->item == x) {
            lista->item = y;
        }
        substituir(x, y, lista->prox);
   }
}
/* void substituir(Item x, Item y, Lista lista) {
    while (lista != NULL) {
        if (lista->item == x) {
            lista->item = y;
        }
        lista = lista->prox;
    }
} */

void showItems(Lista lista) {
    while (lista != NULL) {
        cout << lista->item << endl;
        lista = lista->prox;
    }
}

int igual(Lista A, Lista B) {
    if (A != NULL && B != NULL) {
        if (A->item == B->item) {
            igual(A->prox, B->prox);
        } else {
            return 0;
        }
    } else if (A == NULL && B == NULL) {
        return 1;
    } else {
        return 0;
    }
}
int contador = 1;

Item enesimo(int numero, Lista lista) {
    if (lista != NULL) {
        if (contador < numero) {
            contador++;
            enesimo(numero, lista->prox);
        } else if (contador == numero) {
            return lista->item;
        }
        return 0;
    }
    return 0;
}