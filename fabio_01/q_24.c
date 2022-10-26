#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias. */

int main()
{
    int anos, meses, dias;
    
    printf("Digite quantos anos voê tem?");
    scanf("%i", anos);
    printf("Digite quantos meses?");
    scanf("%i", meses);
    printf("Digite quantos dias?");
    scanf("%i", dias);

    int dias_de_vida = anos * 365 + meses * 30 + dias;

    printf("Eles es tá vivo à: %i", dias);

    return 0;
}