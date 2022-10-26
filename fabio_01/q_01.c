#include <stdio.h>
#include <stdlib.h>

int main(){
    int metros_s;
    printf("Digite a quantidade de metros por segundo que deve ser convertida: ");
    scanf("%d", &metros_s);
    int km_s;
    km_s = metros_s * 3.6;
    printf("Km_h: %d", km_s);
    return 0;
}
