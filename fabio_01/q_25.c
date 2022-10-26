#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias. */

int main()
{
    int anos, meses, dias;
    int total_de_dias_vividos, resto;


    printf("Digite a quantidade de dias que você já viveu: ");
    scanf("%i", total_de_dias_vividos);

    anos = total_de_dias_vividos/365;
    resto = total_de_dias_vividos % 365;
    meses = resto / 30;
    dias = resto % 30;
     
    printf("Anos: %i. Meses: %i. Dias: %i", anos, meses, dias);

    return 0;
}