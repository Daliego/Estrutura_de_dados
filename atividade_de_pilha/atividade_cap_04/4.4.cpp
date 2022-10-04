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
    
    //No início dos processos eram 17, depois 25, em segida, 39, e depois 46;
    //Os itens acrecentados foram 14, depois 22, depois 36 e para finalizar 43.
    //Os processos foram concluidos na ordem 2, 4, 1, 3
    
    //17, 25, 39, 46, 25, 39, 46, 14, 39, 46, 14, 22, 46, 14, 22, 36, 14, 22, 36, 43, 22, 36, 43, 11
   
