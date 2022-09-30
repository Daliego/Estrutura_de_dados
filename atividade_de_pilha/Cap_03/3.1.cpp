#include <stdio.h>
#include <string.h>
#include "pilha_da_mavi.h"
#include <ctype.h>



int  prio (char o) {
    switch (o){
    case '(':
        return 0;
     case '+':
        return 1;
    case '-':
        return 1;
    case '*' :
        return 2;
    case '/' :
        return 2;
        
    }
    return -1; //operador invalido
}

char *posfixa(char *e){
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);

    for(int i = 0  ; e[i];i++){
        if(e[i]=='(' ){
         empilha('(', P);
        }else if (isdigit(e[i])){
            s[j++] = e[i];
        }else if(strchr("+-/*", e[i])){
            while(!vaziap(P) && prio(topo(P))>=prio(e[i])){
                s[j++] = desempilha(P);
                
            }
            empilha(e[i],P);

        }else if(e[i] == ')'){
            while (topo(P) != '('){
                s[j++] = desempilha(P);
            }
            desempilha(P);
            
        }
    }
    while (!vaziap(P)){
        s[j++] = desempilha(P);
    }
    s[j] = '\0';
    destroip(&P);
    return s;

}


int valor(char *e){
    Pilha P = pilha(256);

    for(int i = 0; e[i]; i++){
        
        if(isdigit(e[i])){
            empilha (e[i]-'0',P);
        }else {
            int y = desempilha(P);
            int x = desempilha(P);
            printf("%d",y);
            printf("%d",x);
            switch(e[i]){
                case '+': empilha(x+y,P); break;
                case '-': empilha(x-y,P); break;
                case '*': empilha(x*y,P); break;
                case '/': empilha(x/y,P); break;
            }
        }
    }
    int z = desempilha(P);
    destroip(&P);
    return z;

}


int main(void){
    char e [256];
    printf ("Infixa?");
    gets(e);
    char *f_posfixa = posfixa(e);
    printf("%s",f_posfixa);

    int resultado = valor(f_posfixa);
    printf("Posfixa: %d\n\n", resultado);
    return 0;
}