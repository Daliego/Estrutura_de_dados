#include <stdio.h>
#include <stdlib.h>

int main(){
    int salario;
    printf("Digite o seu salário atual: ");
    scanf("%i", &salario);

    float novo_salario;
    novo_salario = salario * 1.25;

    printf("O novo salario e %0.2f", novo_salario);
}