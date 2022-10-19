#include <stdlib.h>
#include "lista_struct.hpp"

int main() {
    Lista lista;
    lista = include(1, include(2, include(3, NULL)));
    Item ultimoItem = ultimo(lista);
    cout << "Ultimo Item: " << ultimoItem << endl;
}