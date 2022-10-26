//Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura)
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

    float area = (base * altura);
    
    printf("Area: %0.2f", area);
   
    return 0;
}