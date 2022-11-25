#include "ultils.hpp"
#include "iostream"
using namespace std;

int quick(int vetor[], int inicio, int fim){
   int pivot = vetor[inicio];
   int i = inicio;

   for (int j = inicio + 1; j <= fim; j++) {
      if (vetor[j] <= pivot) {
        i += 1;
        troca(&vetor[i], &vetor[j]);
      }
   }

   troca(&vetor[inicio], &vetor[i]);
   return i;
}

void quickSort(int vetor[], int inicio, int fim) {
	if (inicio < fim) {
		int index_do_pivot = quick(vetor, inicio, fim);
		quickSort(vetor, inicio, index_do_pivot - 1); 
		quickSort(vetor, index_do_pivot + 1, fim);	
	}
}

/* int particiona(int vetor[], int primeiro, int ultimo) {
    int elemment = vetor[primeiro];
    primeiro--;
    ultimo++;
    while (primeiro < ultimo) {
        while (vetor[ultimo] > elemment) ultimo--;
        while (vetor[primeiro] < elemment) primeiro++;
        if (primeiro < ultimo) troca(&vetor[primeiro], &vetor[ultimo]);
    }
    return ultimo;
}

void quickSort(int vetor[], int primeiro, int ultimo) {
    if (primeiro >= ultimo) return;
    int meio = particiona(vetor, primeiro, ultimo);
    quickSort(vetor, primeiro, meio); 
    quickSort(vetor, meio+1, ultimo);
} */


int main() {
    int vetor1[] = {72, 69, 51, 46, 33, 28, 15};
    int vetor2[] = {46, 28, 51, 33, 72, 15, 69};
    int tamanho = sizeof(vetor1)/sizeof(vetor1[0]);
    quickSort(vetor1, 0, 6);
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i << ": " << vetor1[i] << endl;
    }
    return 0;
}