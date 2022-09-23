#include <stdio.h>
#include "stack.c"


void main() {
    Pilha pilha = create(3);

    push(pilha, 1);
    push(pilha, 2);

    printf("%d\n", pop(pilha));
    printf("%d\n", pop(pilha));
    int x = pop(pilha);
    printf("%d\n", x);

}