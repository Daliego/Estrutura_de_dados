#include <iostream>
#include "fila.hpp"
#define tempo 3

using namespace std;

int main(){
    Fila* F = new Fila();
    F->inserir_na_fila(17);
    F->inserir_na_fila(25);
    F->inserir_na_fila(39);
    F->inserir_na_fila(46);

    while(F->vazia() == false){
        int x = F->retirar_da_fila();
        int p = x/10;
        int t = x%10;

        if(t > 3){
            F->inserir_na_fila(p*10+(t-tempo));
        }else{
            cout << x << "O Processo foi concluido" << endl;
        }
    }
    
    //A ordem de conclusão dos processos foi 17, depois 25, em segida, 39, e depois 46;
    
    //Os itens acrecentados foram 14, depois 22, depois 36 e para finalizar 43.
