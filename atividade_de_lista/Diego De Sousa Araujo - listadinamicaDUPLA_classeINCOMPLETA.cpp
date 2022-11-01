#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No *ant;
		No(int m,char n[23]){
			mat = m;
			strcpy(nome,n);
			prox = NULL;
			ant = NULL;
		}
};

class Lista {
	public:
		No *inicio;
		No *fim;
	
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	
		void addToFinal(int m, char n[23]){
			No* novo = new No(m, n);
			if (inicio == NULL) {
				inicio = novo;
				fim = novo;
			} else {
				fim->prox = novo;
				novo->ant = fim;
				fim = novo;
			}
		}
		
		void addToIni(int m, char n[23]){
			No* novo = new No(m, n);
			if (inicio == NULL) {
				inicio = novo;
				fim = novo;
			} else {
				novo->prox = inicio;
				inicio->ant = novo;
				inicio = novo;
			}
		}
		
		void addOrd(int m, char n[23]){
			No* novo = new No(m, n);
			No* anterior = NULL;
			No* contador = inicio;
			while (contador != NULL && m > contador->mat) {
				anterior = contador;
				contador = contador->prox;
			}
			anterior->prox = novo;
			novo->ant = anterior;
			novo->prox = contador;
			contador->ant = novo;

		}
		
		//mostra todos os elementos do inicio ao final da lista
		void mostraIniFim(){
			No* contador = inicio;
			while (contador != NULL) {
				cout << "Matricula: " << contador->mat << " " << "Nome: " << contador->nome << endl;
				contador = contador->prox;
			}
		}
		
		// mostra todos os elementos do final ao inicio da lista
		void mostraFimIni(){
			No* contador = fim;
			while (contador != NULL) {
				cout << "Matricula: " << contador->mat << " " << "Nome: " << contador->nome << endl;
				contador = contador->ant;
			}
		}
		
		void removerFinal(){
			fim = fim->ant;
			free(fim->prox);
			fim->prox = NULL;
		}
		
		void removerInicio(){
			inicio = inicio->prox;
			free(inicio->ant);
			inicio->ant = NULL;
		}
		int remover(int m){
			No* contador = inicio;
			while (contador != NULL) {
				if (contador->mat == m) {
					if (contador->ant == NULL) {
						removerInicio();
						return 1;
					}
					if (contador->prox == NULL) {
						removerFinal();
						return 1;
					}
					contador->ant->prox = contador->prox;
					contador->prox->ant = contador->ant; 
					free(contador);
					return 1;
				}
				contador = contador->prox;
			}
			return 0;
			//cout << "Matricula nao encontrada";
		}
};

int main(){
   Lista *l = new Lista();

   l->addToFinal(1, "Diego");
   l->addToFinal(2, "Romero");
   l->addToFinal(4, "Kelsu");
   l->addOrd(3, "Isabela");
   l->mostraIniFim();

   cout << "=======================" << endl;

	l->remover(2);
	l->mostraIniFim();
   

   l->addOrd(1,"Joana Oliveira");
   l->addOrd(10,"Cristiano Oliveira");
  // l->mostra();
   l->addOrd(8,"Joao");
   l->addOrd(4,"Fabio"); 
    l->mostraIniFim(); 
  // l->mostraFimIni();	
   if (l->remover(4)==1) {
       cout<<"Elemento removido!!";
   } else{
    	cout<<"Elemento nao encontrado!!";}    
   l->mostraIniFim(); 
	
}
