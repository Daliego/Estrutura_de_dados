#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno lista[30];
int i = 0;

void incluirDesordenado(Aluno e){
	if (i < 30){
		lista[i] = e;
		i++;
	}else{
		cout << "Não alocou" << endl;
	}
}

//retorna a posicao do elemento procurado
int procura(int mat){
	int indice = -1;
	for (int i = 0; i < 30; i++){
		if (lista[i].mat == mat){
			indice = i;
			break;
		}
	}
	return indice;
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	cout << lista[pos].mat << endl;
	cout << lista[pos].nome << endl;
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){
	for (int i = 0; i < 30; i++){
		if (lista[i].mat == mat){
			cout << lista[i].mat << endl;
			cout << lista[i].nome << endl;
			break;
		}
	}
	cout << "A matrícula procurada não exite" << endl;
}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(int mat){
	int indice = procura(mat);
	lista[indice] = lista[i-1];
	free(&lista[i-1]);
	i = i - 1;
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(int mat){
	int indice = procura(mat);
	for (int j = indice; j < i; j++){
		lista[j] = lista[j+1];
	}
	free(&lista[i]);
	i = i - 1;
}

void verMatriculas() {
	for( int j = 0; j < i; j++) {
		cout << lista[j].mat << endl;
	}
}

main(){
	Aluno aluno_01;
	aluno_01.mat = 1;
	aluno_01.nome = "Diego";

	Aluno aluno_02;
	aluno_02.mat = 2;
	aluno_02.nome = "Carlos";

	Aluno aluno_03;
	aluno_03.mat = 3;
	aluno_03.nome = "Tobias";

	incluirDesordenado(aluno_01);
	incluirDesordenado(aluno_02);
	incluirDesordenado(aluno_03);

	verMatriculas();
	cout << "=============" << endl;
	remover00(3);
	verMatriculas();
	cout << "=============" << endl;
	remover01(2);
	verMatriculas();
	cout << "=============" << endl;
	mostrar(0);
}

