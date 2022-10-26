#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor_dolar;
    int dolar;
    printf("Digite o valor do dolar:");
    scanf("%d", &valor_dolar);

    printf("Digite a quantidade de dolares:");
    scanf("%d", &dolar);

    int real;
    real = dolar * valor_dolar;

    printf("O valor em reais é %d", real);

    return 0;

}