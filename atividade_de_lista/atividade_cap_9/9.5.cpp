#include <stdlib.h>
#include "lista_struct.hpp"

int main() {
    Lista lista;
    lista = include(1, include(2, include(3, include(4, include(5, NULL)))));

    int somaTotal = soma(lista);
    cout << "Soma: " << somaTotal << endl;
}