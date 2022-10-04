#include <iostream>
#include <cctype>

#include <iostream>
 
using namespace std;

typedef int itemF;

class No {
 
	public:
 
		itemF valor;
		No* prox;
 
		No(itemF n){
			valor = n;
			prox = NULL;
		}
};
 
class Fila {
	public:
		No* inicio;
		No* fim;
 
		Fila() {
			inicio = NULL;
			fim = NULL;
		}
 
		void inserir_na_fila(itemF n) {
			if(vazia()) {
                inicio = new No(n);
                fim = inicio;
			} else {
                No* novo_no = new No(n);
                fim->prox = novo_no;
                fim = novo_no;
			}
		}
 
		itemF retirar_da_fila() {
			if(!vazia()) {
                itemF valor = inicio->valor;
                No* auxiliar = inicio;
                inicio = inicio->prox;
                free(auxiliar);
                return valor;
			} else return '\0';
		}
 
		bool vazia() {
			return (inicio == NULL);
		}
 
		void popAll() {
			while(!vazia()) {
                cout << retirar_da_fila() << "\n" << endl;
			}
		}
};