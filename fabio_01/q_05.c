#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Digite um numero de 3 digitos: ");
    scanf("%i", &numero);

    int resto;
    
    if (numero >= 0)
    {
        while (numero != 0)
        {
            resto = numero % 10;
            printf("%i", resto);
            numero /= 10;
        }
    }
}