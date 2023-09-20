#include <stdio.h>
#define TAM 3

int pilha[TAM], topo;

void inicializar() {
    topo = -1;
}

int verificarVazia() {
    if (topo == 0 || topo == -1) {
        return 1;
    } else {
        return 0;
    }
}
int verificarCheia() {
    if (topo == (TAM - 1)) {
        return 1;
    } else {
        return 0;
    }
}

void empilhar() {
    int valor, pilhaCheia;
    pilhaCheia = verificarCheia();
    if (pilhaCheia == 1) {
        printf("A pilha esta cheia!\n");
    } else {
        printf("Digite valor: \n");
        scanf("%d", &valor);
        topo++;
        pilha[topo] = valor;
    }
}

void desempilhar() {
    int pilhaVazia;
    pilhaVazia = verificarVazia();
    if (pilhaVazia == 1) {
        printf("A pilha esta vazia!\n");
    } else {
        topo--;
    }
}

void imprimir() {
    int cont;
    printf("\n PILHA: \n");
    for (cont = 0; cont <= topo; cont++) {
        printf("  %i \n", pilha[cont]);
    }
}

void main() {
    inicializar();
    desempilhar();
}