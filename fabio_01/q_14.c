#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>
//Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)
int main()
{
    float celsius, farenheit;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    farenheit = (9 * celsius + 160)/5;
    
    printf("Temperatura em Farenheit: %0.2f", farenheit);
   
    return 0;
}