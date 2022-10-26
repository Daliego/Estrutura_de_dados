#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>
//(t°C = (5 * t°F - 160) / 9).
int main()
{
    int kilometros;
    printf("Digite o valor em kilometros: ");
    scanf("%i", &kilometros);

    int metros = kilometros * 1000;
    
    printf("Metros: %0.2i metros", metros);
   
    return 0;
}