#include <stdlib.h>
#include "lista_struct.hpp"

int main() {
    Lista lista01;
    lista01 = include(1, include(2, NULL));
    Lista lista02;
    lista02 = include(1, include(2, include(3, NULL)));
    cout << igual(lista01, lista02) << endl;
}