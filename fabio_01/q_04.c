#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int quociente, resto;
    quociente = a/b;
    resto = a % b;

    printf("O quociente é %d, e o resto é %d", quociente, resto);
}