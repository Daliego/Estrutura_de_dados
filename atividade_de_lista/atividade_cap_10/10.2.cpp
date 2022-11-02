#include "listaOrdenada.hpp"
#include "iostream"
using namespace std;

int main() {
    int numero;
    cout << "Digite a quantidade de numeros aleatorios: " << endl;
    cin >> numero;
    cout << "Numero: " << numero << endl;
    Lista lista = NULL; 
    Lista *l;
    l = &lista;


    for (int i = 0; i < numero; i++) {
        inserirOrdenado(rand() % 100, l);
    }

    showItemsFromEnd(lista);

   /*  while (lista != NULL) {
        inserirOrdenado(lista->item, l);

        lista = lista->prox;
    } */

    
}