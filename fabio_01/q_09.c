//Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>

int main()
{
    float base, altura;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    float area = (base * altura)/2;
    
    printf("Area: %0.2f", area);
   
    return 0;
}