#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>

int main()
{
    int contador = 0;
    float soma_nota, soma_peso;
    float nota, peso;
    float media;
    while(contador < 3){
        printf("DIGITE A NOTA: ");
        scanf("%f", &nota);
        printf("DIGITE O VALOR DA NOTA DO ALUNO: ");
        scanf("%f", &peso);

        soma_nota += (nota * peso);
        soma_peso += peso;

        contador++;
    }
    media = soma_nota/soma_peso;
    printf("Media ponderada: %0.2f", media);
   
    return 0;
}
