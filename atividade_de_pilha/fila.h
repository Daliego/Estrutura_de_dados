/*
*	Exemplo de implementação de Fila em C
*	Kelvin S. do Prado
*/

#include <stdio.h>

#define MAX 10
#define ERRO -1

typedef int TIPOCHAVE;

typedef struct{
	TIPOCHAVE chave;
}REGISTRO;

typedef struct{
	REGISTRO A[MAX+1];
	int nroRegistros;
}FILA;

void iniciate_fila(FILA* F){
	int i = 0;
	for (i; i < MAX-2; i++){
		F->A[i].chave = i*2;
	}
	F->nroRegistros = i;
}

void show_fila(FILA* F){
	int i = 0;
	printf("FILA:\n");
	for (i; i < F->nroRegistros; i++){
		printf("[ %d ] ", F->A[i].chave);
	}
	printf("\n\n");
}

bool insert_Fila(TIPOCHAVE ch, FILA* F){
	if( F->nroRegistros >= MAX )
		return false;
	F->A[F->nroRegistros].chave = ch;
	F->nroRegistros++;
	return true;
}

bool remove_fila(FILA* F){
	if( F->nroRegistros <= 0 )
		return false;
	int i = 1;
	for (i; i < F->nroRegistros; i++){
		F->A[i-1].chave = F->A[i].chave;
	}
	F->nroRegistros--;
	return true;
}

int look_fila(TIPOCHAVE ch, FILA* F){
	F->A[F->nroRegistros].chave = ch; // Coloca a ch na ultima posição para fazer busca Sentinela
	int i = 0;
	while( F->A[i].chave != ch )
		i++;
	if( i >= F->nroRegistros )
		return ERRO;
	return i;
}

/* int main(){
	FILA fi;
	iniciate_fila(&fi);
	mostraFila(&fi);

	insert_Fila(15, &fi);
	mostraFila(&fi);

	remove_fila(&fi);
	mostraFila(&fi);

	printf("A chave buscada se encontra na posicao %d da fila\n\n", buscaFila(8, &fi) );
	return 0;
} */