#include <stdlib.h>
#include "lista_struct.hpp"

int main() {
    Lista lista01;
    lista01 = include(1, include(2, include(5, include(8, NULL))));

    Item numero = enesimo(90, lista01);
    cout << "Numero: " << numero << endl;
}