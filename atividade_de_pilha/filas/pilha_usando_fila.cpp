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
                No* aux = inicio;
                inicio = inicio->prox;
                free(aux);
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

int main(){
    Fila* lista_01 = new Fila();
    Fila* lista_02 = new Fila();

    char letra;
    int resposta;

    do{
        cout << "Digite a letra: ";
        cin >> letra;

        if(lista_01->vazia() == true){
            lista_01->inserir_na_fila(letra);
        }else{
            while(lista_01->vazia() == false){
                lista_02->inserir_na_fila(lista_01->retirar_da_fila());
            }
            
            lista_01->inserir_na_fila(letra);
            
            while(lista_02->vazia() == false){
                lista_01->inserir_na_fila(lista_02->retirar_da_fila());
            }
        }

        cout << "Deseja continuar? (1- Sim 2- Nao)";
        cin >> resposta;
    }while(resposta == 1);
    
    lista_01->popAll();
    
}