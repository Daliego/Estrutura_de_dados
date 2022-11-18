#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>


using namespace std;

typedef struct aluno {
	int matricula;
	char nome[20];
	
}Aluno;

void trocarPosicao(Aluno* inteiro1, Aluno* inteiro2) {
    Aluno aluno1 = *inteiro1;
    Aluno aluno2 = *inteiro2;
    *inteiro1 = aluno2;
    *inteiro2 = aluno1;
}

void imprimirVetor(Aluno vetor[], int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		cout << "Matricula: " << vetor[i].matricula << endl;
		cout << "Nome: " << vetor[i].nome << endl;
	}
}

Aluno receberAluno(int matricula, char nome[]) {
	Aluno aluno;
	aluno.matricula = matricula;
	strcpy(aluno.nome, nome);
	//aluno.nome = nome;
	return aluno;
}

void inserirNaArray(Aluno vetor[], Aluno aluno, int* posicao) {
	vetor[*posicao] = aluno;
	*posicao += 1;
}

void insere(Aluno aluno, Aluno vetor[], int posicao) {
	while (posicao > 0 && aluno.matricula < vetor[posicao - 1].matricula) {
		vetor[posicao] = vetor[posicao - 1];
		posicao--;
	}
	vetor[posicao] = aluno;
}

void ord_insercao(Aluno vetor[], int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		insere(vetor[i], vetor, i);
	}
};

int selecion(Aluno vetor[], int tamanho) {
	int posicao = 0;
	for (int i = 1; i < tamanho; i++) {
		if (vetor[posicao].nome[0] < vetor[i].nome[0]) {
			posicao = i;
		}
	}
	return posicao;
}

void selectionSort(Aluno vetor[], int tamanho) {
	for (int i = tamanho; i > 0; i--) {
		trocarPosicao(&vetor[selecion(vetor, i)], &vetor[i-1]);
	}
};

void empurra(Aluno vetor[], int tamanho) { 
    //Coloca o mair inteiro no final do vetor, recebe uma array de inteiros, e o número de inteiros do array
    //int aux;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i].matricula > vetor[i+1].matricula) {
            trocarPosicao(&vetor[i], &vetor[i+1]);
        }
    }
}

void bubbleSort(Aluno vetor[], int tamanho) { //Um vetor, e o seu número de elementos
    for (int i = 0; i < tamanho - 1; i++) {
        empurra(vetor, tamanho-1);
    }
}



Aluno myarray[20];
int posicao = 0; 
	
main(){
	Aluno aluno01 = receberAluno(12, "Diego");
	Aluno aluno02 = receberAluno(148, "Joao");
	Aluno aluno03 = receberAluno(13, "Maria");
	Aluno aluno04 = receberAluno(129, "Joana");
	
	 //1:  A. leia os valores e adicione no vetor de dados
	 // ordene pelo campo matricula
	 	//   B. Ordene por:
		//   c. Insercao
	// mostre o resultado ordenado

	inserirNaArray(myarray, aluno01, &posicao);
	inserirNaArray(myarray, aluno02, &posicao);
	inserirNaArray(myarray, aluno03, &posicao);
	inserirNaArray(myarray, aluno04, &posicao);

	//ord_insercao(myarray, 20);
	
	
	// 2: A. leia os valores e adicione no vetor de dados
	// ordene pelo campo nome 
		//  B. Ordene por:
	//  c. selectionSort
	// mostre o resultado ordenado

	selectionSort(myarray, 20);

	
	// 3: A. leia os valores e adicione no vetor de dados
	// ordene pelo campo matricula
	//  B. Ordene por:
	//  c. bubble_sort
	// mostre o resultado ordenado
	
	//bubbleSort(myarray, 20);

	imprimirVetor(myarray, 20);	
}

