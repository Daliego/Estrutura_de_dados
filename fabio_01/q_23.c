#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele
corresponde. */

int main()
{
    int contador = 0;
    int soma, numero;

    while (contador != 3)
    {
        printf("Digite o numero: ");
        scanf("%i", &numero);
        soma += numero;
        
        printf("\n    %i", numero);

        contador++;
    }

    int media = soma/contador;
    printf("A média dos 3 numeros: %i", numero);
    return 0;
}