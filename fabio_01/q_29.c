
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor_saqueado, resto;
    printf("Digite o valor que vai ser sacado: ");
    scanf("%i", &valor_saqueado);
    
    int notas_de_100 = valor_saqueado/100;
    resto = valor_saqueado % 100;
    int notas_de_50 = resto / 50;
    resto = resto % 50;
    int notas_de_20 = resto / 20;
    resto = resto % 20;
    int notas_de_10 = resto /10;
    resto = resto % 10;
    int notas_de_5 = resto/ 5;
    resto = resto % 5;
    int notas_de_2 = resto / 2;
    int um_real = resto % 2;

    printf("Notas de 100: %i. Notas de 50: %i. Notas de 20: %i. Notas de 10: %i. Notas de 5: %i. Notas de 2: %i. Moedas de 1 real: %i.", notas_de_100, notas_de_50, notas_de_20, notas_de_10, notas_de_5, notas_de_2, um_real);

    return 0;
}