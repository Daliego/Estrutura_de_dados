#include "./pilha.h"
#include <stdio.h>
#include <stdlib.h>

/* 
 int main (){
    for 
    char frase[20] = "Digite números até cansar:\n";
    scanf();
    char cansou[20] = "Cansou?\nDigite <enter> para continuar.\nOu sim para parar.";
    
    Pilha *p;
    iniciar_pilha(p);
 
} */

int main (){
    int vetor[30];
    int contador = 0;
        
    Pilha *A;
    Pilha *B;

    iniciar_pilha(A);
    iniciar_pilha(B);

    for (int i = 0; i < 20; i++){
        int atual = 0;
        int anterior;

        printf("Digite números até cansar:\n");
        scanf("%d", &vetor[contador]);

        contador++;

        printf("Cansou?\nDigite <enter> para continuar.\nOu sim para parar.");
        scanf("%d", &i);
    }

    
    
    for (int j = 0; j < contador - 1; j++){
        for (int i = 0; i < contador - 1; i++){
            int anterior = vetor[i];
            int atual = vetor[i++];
            int aux;
            if (atual < anterior){
                aux = atual;
                atual = anterior;
                anterior = aux;
            }
        }
    }

    for (int i = 0; i < contador; i++){
        inserir_na_pilha(B, vetor[i]);
    }

    for (int i = 0; i < contador; i++){
        int numero = retirar_da_pilha(B);
        inserir_na_pilha(A, numero);
    }
    
    for (int i = 0; i < contador; i++){
        int numero = retirar_da_pilha(A);
        printf("%d\n", numero);
    }

    return 0;
}