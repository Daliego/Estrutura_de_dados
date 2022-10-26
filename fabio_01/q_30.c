#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor_do_produto;
    printf("Digite o valo do produto: ");
    scanf("%i", &valor_do_produto);
    if (valor_do_produto % 3 == 0){
        int prestacao = valor_do_produto / 3;
        printf("O valor da entrada é de %i e o valor das prestacoes é %i", prestacao, prestacao);
    }else{
        int prestacao = valor_do_produto / 3;
        int resto = valor_do_produto % 3;
        int primeira_prestacao = prestacao + resto;
        printf("O valor da entrada é de %i e o valor das prestacoes é %i", primeira_prestacao, prestacao);

    }
    return 0;
}