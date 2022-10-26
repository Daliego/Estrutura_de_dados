//Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 *  * r3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>

int main()
{
    float pi, raio;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    pi = 3.14;

    float volume = 4 * pi * pow(raio, 3);
    
    printf("Volume: %0.2f", volume);
   
    return 0;
}