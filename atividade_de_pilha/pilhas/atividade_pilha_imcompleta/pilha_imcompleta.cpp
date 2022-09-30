#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No {
	public:
		char nome;// dado
		No *prox; // nopilha1
		No(char n){
			nome = n;
			prox = NULL;
		}
};

class Pilha {
	public:
		No *topo; // inicio
		int N = 0;
		Pilha(){
			topo = NULL;
		}

		void push(char n){
			No* novo = new No(n);
			novo->prox = topo;
  			topo = novo;
  			N++; 
		}
		
		char pop(){
			char r = topo->nome;
			topo = topo->prox;
			N--;
			return r;
		}
		
		int isEmpty(){
			return (topo == NULL);
		}

/* 		void popAll(){
			while(!(p ->isEmpty())){
				p->pop();
			}
			cout << "Pilha vazia" << endl;
		}
	 */
};

int main() {
		
	Pilha *pilhaDoDiego = new Pilha();
	pilhaDoDiego->push('d');
	pilhaDoDiego->push('i');
	pilhaDoDiego->push('e');
	pilhaDoDiego->push('g');
	pilhaDoDiego->push('o');

	while (!pilhaDoDiego->isEmpty()){
		cout << pilhaDoDiego->pop() << endl;
	}
}