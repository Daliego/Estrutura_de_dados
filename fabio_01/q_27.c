/* Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros). */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float custo_de_fabrica;
    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custo_de_fabrica);

    float preco_do_distribuidor = 0.28 * custo_de_fabrica;
    float preco_dos_impostos = 0.45 * custo_de_fabrica;
    float preco_do_carro = custo_de_fabrica + preco_do_distribuidor + preco_dos_impostos;

    printf("O valor do carro: %0.2f", preco_do_carro);
    return 0;
}