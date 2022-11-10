#include "iostream"
using namespace std;

/* void insere(int element, int vetor[], int posicao) {
    while (posicao > 0 && element < vetor[posicao - 1]) {
        vetor[posicao] = vetor[posicao - 1];
        posicao--; 
    }
    vetor[posicao] = element;
}

void insertSort(int vetor[], int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        insere(vetor[i], vetor, i);
    }
} */


void insere(char letter, char vetor[], int posicao) {
    while (posicao > 0 && letter < vetor[posicao - 1]) {
        vetor[posicao] = vetor[posicao - 1];
        posicao--; 
    }
    vetor[posicao] = letter;
}

void insertSort(char vetor[], int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        insere(vetor[i], vetor, i);
    }
}

int main() {
    char nome[6] = "ecbad";
    insertSort(nome, 6);
    for (int i = 0; i < 6; i++) {
        cout << nome[i] << endl;
    }
}
