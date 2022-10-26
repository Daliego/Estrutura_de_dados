#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele
corresponde. */

int main()
{
    int total_de_minutos, resto;
    printf("Digite o total de minutos: ");
    scanf("%i", &total_de_minutos);

    int dias = total_de_minutos/1440;
    resto = total_de_minutos % 1440;
    int horas = resto/60;
    int minutos = resto % 60;
    
    printf("Quantidade de dias: %i. Quantidade de horas: %i. Quantidade de minutos: %i.", dias, horas, minutos);
   
    return 0;
}