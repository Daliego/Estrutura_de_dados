#include <stdio.h>
#include <stdlib.h>

int main(){
    float km_h;
    printf("Digite o valor em km que deve ser convertido: ");
    scanf("%f", &km_h);

    float m_s;
    m_s = km_h/(1.0 * 3.6);
    printf("m_s: %0.3f", m_s);    
    return 0;
}