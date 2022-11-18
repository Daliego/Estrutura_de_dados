#include<stdio.h>
#include<iostream>
using namespace std;

void troca(int* inteiro1, int* inteiro2) {
    int numero1 = *inteiro1;
    int numero2 = *inteiro2;
    *inteiro1 = numero2;
    *inteiro2 = numero1;
}

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

int main(){
   int vetor[6] = {7, 9, 4, 3, 6, 1};
   int i;   
   quickSort(vetor, 0, 5);
   printf("\n2.Vetor ordenado:\n");
   for(i = 0; i <= 5; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
}


