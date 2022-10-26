//Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 *  *r)

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

    float comprimento = 2 * pi * raio;
    
    printf("Area: %0.2f", comprimento);
   
    return 0;
}