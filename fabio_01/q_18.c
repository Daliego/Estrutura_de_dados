#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int metros;
    printf("Digite o valor em metros: ");
    scanf("%i", &metros);

    int centimetros = metros * 100;
    
    printf("Centimetros: %0.2i cm", centimetros);
   
    return 0;
}