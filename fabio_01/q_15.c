#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>
//(t°C = (5 * t°F - 160) / 9).
int main()
{
    float celsius, farenheit;
    printf("Digite a temperatura em farenheit: ");
    scanf("%f", &farenheit);

    celsius = (5 * farenheit - 160)/9;
    
    printf("Temperatura em celsius: %0.2f", celsius);
   
    return 0;
}