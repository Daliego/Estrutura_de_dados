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
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);	
			prox=NULL;
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;
	
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	
		void addToFinal(int m, char n[23]){
			No *novo = new No(m,n);
			if (fim==NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox=novo;
				fim=novo;
			}
		}
		
			
		bool lst_vazia(){
			return (inicio==NULL);
		}
		void addToInicio(int m,char n[23]){
		No* novo = new No(m, n);
		if (inicio == NULL){
			/* inicio->prox = novo;
			fim = novo; */
			inicio = novo;
			fim = novo;
		}else{
			novo->prox = inicio;
			inicio = novo;
		}
			
			
		}
		void mostrarNo(No* p){
			cout << "Matricula: " << p->mat << endl;
			cout << "Nome: " << p->nome << endl;
		}
		void mostra(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No* atual;
				atual = inicio;
				while (atual != NULL){
					mostrarNo(atual);
					atual = atual->prox;
				}
			}
						
		}
		
		int remove(int mat){
			No* auxiliar;
			No* novo = inicio;
			No* anterior = NULL;
			if (!lst_vazia()){
				while (novo != NULL){
					if (novo->mat == mat){
						if (fim == novo){
							auxiliar = fim;
							fim = anterior;
							anterior->prox = NULL;
							free(auxiliar);
							return 1;
						} 
						
						if (novo == inicio){
							inicio = inicio->prox;
							free(novo);
							return 1;
						}
						
						anterior->prox = novo->prox;
						free(novo);
						return 1;
					}
					anterior = novo;
					novo = novo->prox;
				}
			}else{
				return 0;
			}
			
		}
		
		// auxiliar no metodo remove, vai 
		//retornar o endereco do anterior
		No *busca(int mat){
			No* procurado = inicio;
			while (procurado->prox != NULL){
				if (procurado->mat = mat){
					mostrarNo(procurado);
					break;
				}
				procurado = procurado->prox;
			}
			cout << "Aluno nao existe" << endl;
		}
		
		void removeTodos(){
			No *atual=inicio;
			No *proximo=NULL;
			while (atual!=NULL){
					proximo=atual->prox;
					cout<<"\n Apaga:"<<atual->nome;
					free(atual);
					atual=proximo;						
			}
			inicio=atual;
		}
		
		// criar uma nova lista que seja o inverso da primeira
		void crialistainversa(){
			Lista *listaInversa = new Lista();
			No* novo = inicio;
			while (novo->prox != NULL){
				listaInversa->addToInicio(novo->mat, novo->nome);
				novo = novo->prox;
			} 
			//cout << "===============" << endl;
			listaInversa->addToInicio(fim->mat, fim->nome);
			//listaInversa->mostra();
		}
		
		//inverter a propria lista
		void listainvertida(){
			No* percorredor = inicio;
			No* contador = inicio;
			No* listar;


			while (percorredor != NULL){
				int matriculaParaRemover = percorredor->mat;
				char nomeParaRemover[23];
				strcpy(nomeParaRemover, percorredor->nome);

				percorredor = percorredor->prox;

				remove(matriculaParaRemover);
				addToInicio(matriculaParaRemover, nomeParaRemover);

				//addToInicio(atual->mat, atual->nome);
				//percorredor = percorredor->prox;
				//contador = contador->prox;
			}
		}
};
main(){
   Lista *l = new Lista();
   l->addToFinal(1,"Joao");
   l->addToFinal(2,"Gabriela");
   l->addToFinal(3,"Fabiola");
   l->addToInicio(5,"Joana Oliveira");
   l->addToInicio(6,"Cristiano Oliveira");
	l->mostra();
   l->crialistainversa();
   l->remove(3);
   cout << "===========" << endl;
   l->mostra();;
   cout << "===========" << endl;
   l->listainvertida();
	l->mostra();
   

}
