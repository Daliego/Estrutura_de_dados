#include "lista_struct.hpp"

int main() {
    Lista lista;
    lista = include(1, include(2, include(1, include(4, include(1, NULL)))));

    int repeticoes = ocorrencia(1, lista);

    cout << "Numero de repeticoes: " << repeticoes << endl;
}
