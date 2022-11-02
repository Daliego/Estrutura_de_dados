#include "listaOrdenada.hpp"
#include "iostream"
using namespace std;

void inSR(Item item, Lista *lista) {
    if (!searchItens(item, *lista)) {
        inserirOrdenado(item, lista); 
    }
}

int main() {
    Lista lista;
    lista = include(1, include(2, include(3, NULL)));
    inSR(4, &lista);
    showItems(lista);
}