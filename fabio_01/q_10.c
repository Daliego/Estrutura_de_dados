//Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream>

int main()
{
    float lado;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    float area = (lado * lado);
    
    printf("Area: %0.2f", area);
   
    return 0;
}