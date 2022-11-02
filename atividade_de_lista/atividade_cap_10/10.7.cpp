#include "listaOrdenada.hpp"
#include "iostream"

using namespace std;

typedef struct poli {
    float coeficiente = NULL;
    int expoente = NULL;
    struct poli *prox = nullptr;
} *Poli;

Poli termo(float c, int e, Poli p) {
    Poli n = (Poli)(malloc(sizeof(struct poli)));
    n->coeficiente = c;
    n->expoente = e;
    n->prox = p;
    return n;
}

void adt(float c, int e, Poli *P) {
    if (*P == NULL || (*P)->expoente < e) {
        *P = termo(c, e, *P);
    } else if ((*P)->expoente == e) {
        (*P)->coeficiente = (*P)->coeficiente + c;
        if ((*P)->coeficiente == 0) {
            Poli aux = *P;
            *P = aux->prox;
            free(aux);
        }
    } else {
        adt(c, e, &(*P)->prox);
    }
}

Poli soma(Poli P, Poli Q) {
    Poli somaPolinomios = termo(P->coeficiente, P->expoente, NULL);
    adt(Q->coeficiente, Q->expoente, &somaPolinomios);
    return somaPolinomios;
}

void exipePolinomio(Poli polinomio) {
    if (polinomio == NULL) {
        return;
    }
    cout << "+" << polinomio->coeficiente;
    if (polinomio->expoente != 0) {
        cout << "*x^" << polinomio->expoente;
    }
    exipePolinomio(polinomio->prox);
}


int main() {
    Poli poli_01;
    Poli poli_02;
    Poli poli_03;
    poli_01 = termo(2, 3, NULL);
    poli_02 = termo(6, 4, NULL);
    poli_03 = soma(poli_01, poli_02);
    exipePolinomio(poli_03);

}