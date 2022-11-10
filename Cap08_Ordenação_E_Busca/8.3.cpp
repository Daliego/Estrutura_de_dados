#include "iostream"
using namespace std;

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
void bubbleSort(int vetor[], int n) { //Um vetor, e o seu número de elementos
    for (int i = 0; i < n - 1; i++) {
        empurra(vetor, n-1);
    }
}
void bubbleSortRecursivo(int vetor[], int n) { //Um vetor, e o seu número de elementos, com recursividade
    if (n == 1) {
        return;
    }
   // int count = 0;

    /* for (int j = 0; j < n - 1; j++) {
        if (vetor[j] > vetor[j+1]) {
            troca(&vetor[j], &vetor[j+1]);
            count++; 
        }
    } */
    empurra(vetor, n-1);

    /* if (count == 0) {
        return;
    } */

    bubbleSortRecursivo(vetor, n-1);
}

int main() {
    int inteiros[] = {2, 6, 5, 1, 4, 3};
    int n = sizeof(inteiros)/ sizeof(inteiros[0]);
    bubbleSortRecursivo(inteiros, n);

    int contador = 0;
    while (contador < n) {
        cout << inteiros[contador] << endl;
        contador++;
    }
}