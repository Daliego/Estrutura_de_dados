#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>
//(t°C = (5 * t°F - 160) / 9).
int main()
{
    int kilogramas;
    printf("Digite o valor em kilogramas: ");
    scanf("%i", &kilogramas);

    int gramas = kilogramas * 1000;
    
    printf("Gramas: %0.2i gramas", gramas);
   
    return 0;
}