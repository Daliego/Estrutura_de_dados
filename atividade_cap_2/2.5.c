#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char caractere;
    struct no *proximo;
}No;

No* empilhar(No *pilha, char valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->caractere = valor;
        novo->proximo = pilha;
        return novo;
    }else{
        printf("Erro ao alocar na memória\n");
        return NULL;
    }
}

No* desempilhar(No **pilha){
    No *remover;

    if (*pilha){
        remover = *pilha;
        *pilha = remover->proximo;

    }else{
        printf("Pilha vazia\n");
        return remover;
    }
}

void imprimir_pilha(No *pilha){
    printf("Pilha\n");
    while (pilha){
        printf("%c\n", pilha->caractere);
        pilha = pilha->proximo;

    }
}

int forma_par(char f, char d){
    switch (f)
    {
    case ')': 
        if (d == '('){
            return 1;
        }else{
            return 0;
        }
        break;
    case ']':
        if (d == '['){
                return 1;
            }else{
                return 0;
            }
            break;
    case '}':
        if (d == '{'){
                return 1;
            }else{
                return 0;
            }
        break;
    }
}

int identificar_formacao(char x[]){
    int i = 0;
    No *pilha  = NULL;

    while(x[i] != '\0'){
        if(x[i] == '[' || x[i] == '(' || x[i] == '{'){
            pilha = empilhar(pilha, x[i]);
            imprimir_pilha(pilha);
        }else if (x[i] == ']' || x[i] == ')' || x[i] == '}'){
            remover = desempilhar(&pilha);
            if (forma_par(x[i], remover->caractere) == 0){
                printf("Expressão mal-formada\n");
                return 1;
            }
            free(remover);
        }
        i++;
    }
    if (pilha){
        printf("Expressão mal-formada\n");
        return 1;
    }else{
        printf("Expressão bem-formada");
    }
}

int main(){
    char expressao[50];
    printf("Digite a expressão: ");

    scanf("%49[^\n]", expressao);
    printf("\nExpressao: %s\nRetorno: %d\n", expressao, identificar_formacao(expressao));
}

//'11:38'