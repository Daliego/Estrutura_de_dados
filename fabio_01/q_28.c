/* Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros). */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float qtd_de_latao;

    printf("Digite a quantidade de latão desejada: ");
    scanf("%f", &qtd_de_latao);

    float qtd_cobre = 0.70 * qtd_de_latao;
    float qtd_zinco = 0.30 * qtd_de_latao;

    printf("A quantidade de cobre: %0.2f. A quantidade de zinco: %0.2f", qtd_cobre, qtd_zinco);
    return 0;
}