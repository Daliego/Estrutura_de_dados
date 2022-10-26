#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele
corresponde. */

int main()
{
    int total_de_horas, resto;
    printf("Digite o total de horas: ");
    scanf("%i", &total_de_horas);

    int semanas = total_de_horas/168;
    resto = total_de_horas % 168;
    int dias = resto / 24;
    resto = resto % 24;
    
    printf("Quantidade de semanas: %i. Quantidade de dias: %i. Quantidade de horas: %i", semanas, dias, resto);
   
    return 0;
}