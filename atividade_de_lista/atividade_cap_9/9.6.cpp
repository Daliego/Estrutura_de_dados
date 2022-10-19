#include <stdlib.h>
#include "lista_struct.hpp"

int main() {
    Lista lista;
    lista = include(1, include(2, include( 1, include(4, include(1, NULL)))));
    substituir(1, 2, lista);
    showItems(lista);
}