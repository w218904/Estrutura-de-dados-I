#include <stdio.h>
#include <stdlib.h>

struct no {
    int valor;
    struct no *prox;
};

typedef struct no No;

typedef struct {
    No *inicio;
} Lista;

void imprimirLista(Lista *l) {
    No *aux;
    aux = l -> inicio;
    if (aux == NULL) {
        printf("LISTA VAZIA!");
    } else {
        printf("\nVALOR(ES) NA LISTA: ");
        while (aux != NULL) {
            printf(" %d ", aux -> valor);
            aux = aux -> prox;
        }
    }
}

void buscarNo(Lista *l) {
    No *aux;
    aux = l -> inicio;
    int valorBuscado, encontrou = 0;
    if (aux == NULL) {
        printf("LISTA VAZIA - VALOR NAO ENCONTRADO!");
    } else {
        printf("Digite o valor buscado: ");
        scanf("%i", &valorBuscado);
        while (aux != NULL) {
            if (valorBuscado == aux -> valor) {
                printf("\nVALOR ENCONTRADO!");
                encontrou = 1;
                break;
            } else {
                aux = aux -> prox;
            }
        }
    }
    if (encontrou == 0) {
        printf("\nVALOR NAO ENCONTRADO NA LISTA");
    }
}

void main() {

    No *no1, *no2;
    Lista l;

    // no1 = malloc(sizeof(No));
    // no2 = malloc(sizeof(No));

    // no1 -> valor = 10;
    // no2 -> valor = 20;
    // no1 -> prox = no2;
    // no2 -> prox = NULL;
    l.inicio = NULL;

    buscarNo(&l);
    imprimirLista(&l);


}