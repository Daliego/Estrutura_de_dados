#include "iostream"
using namespace std;

/* void troca(int inteiro1, int inteiro2) {
    int auxiliar = inteiro1;
    inteiro1 = inteiro2;
    inteiro2 = auxiliar;
} */
void troca(int* inteiro1, int* inteiro2) {
    int numero1 = *inteiro1;
    int numero2 = *inteiro2;
    *inteiro1 = numero2;
    *inteiro2 = numero1;
}
void empurra(int v[], int n) { 
    //Coloca o mair inteiro no final do vetor, recebe uma array de inteiros, e o número de inteiros do array
    //int aux;
    for (int i = 0; i < n; i++) {
        if (v[i] > v[i+1]) {
            /* aux = v[i+1];
            v[i+1] = v[i];
            v[i] = aux; */
            troca(&v[i], &v[i+1]);
        }
    }
}