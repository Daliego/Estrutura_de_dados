#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele
corresponde. */

int main()
{
    int total_de_meses, resto;
    printf("Digite o total de meses: ");
    scanf("%i", &total_de_meses);

    int anos = total_de_meses/12;
    resto = total_de_meses % 12;
    int meses = resto;
    
    printf("Quantidade de anos: %i. Quantidade de meses: %i.", anos, meses);
   
    return 0;
}