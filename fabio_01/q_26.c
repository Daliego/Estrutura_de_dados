/* Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros). */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero_de_anos, cigarros_diarios, preco_da_cartela;
    
    printf("Digite o número de cigarros fumados diariamente: ");
    scanf("%i", cigarros_diarios);
    pritf("Digite o numero de anos: ");
    scanf("%i", numero_de_anos);
    printf("Digite o preco da cartela: ");
    scanf("%i", preco_da_cartela);

    int total_de_cigarros = numero_de_anos * 365 * cigarros_diarios;
    int total_de_cartelas;
    if (total_de_cigarros % 20 != 0)
    {
        total_de_cartelas = total_de_cigarros / 20 + 1
    }
    else
    {
        total_de_cartelas = total_de_cigarros / 20
    }

    printf("O total de cartelas: %i", total);
    

    return 0;
}