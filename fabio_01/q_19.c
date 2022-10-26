#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.
int main()
{
    int metros;
    printf("Digite o valor em metros: ");
    scanf("%i", &metros);

    int km = metros/1000;
    int resto = metros % 1000;
    
    printf("Quantidade de kilometros: %i. Quantidade de metros: %i", km, resto);
   
    return 0;
}