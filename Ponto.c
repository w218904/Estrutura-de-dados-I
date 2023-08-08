#include <stdlib.h>
#include <math.h>
#include "Ponto.h" //inclui os Protótipos

struct ponto{//Definição do tipo de daos
    float x;
    float y;
};

Ponto* Ponto_cria(float x, float y) {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p != NULL) {
        p -> x = x;
        p -> y = y;
    }
    return p;
}

void Ponto_libera(Ponto* p) {
    free(p);
}

int Ponto_acessa(Ponto* p, float* x, float* y) {
    if (p == NULL) {
        return 0;
    }
    *x = p -> x;
    *y = p -> y;
    return 1;
}

int Ponto_atribui (Ponto* p, float x, float y) {
    if (p == NULL) {
        return 0;
    }
    p -> x = x;
    p -> y = y;
    return 1;
}

float Ponto_distancia(Ponto* p1, Ponto* p2) {
    if (p1 == NULL || p2 == NULL) {
        return -1;
    }
    float dx = p1 -> x - p2 -> x;
    float dy = p1 -> y - p2 -> y;
    return sqrt (dx * dx + dy * dy);
}

/*int main() {
    float d;
    Ponto *p, *q;
    //Ponto r; //ERRO
    p = Ponto_cria(10, 21);
    q = Ponto_cria(7, 25);
    //q -> x = 2; //ERRO
    d = Ponto_distancia(p, q);
    printf("Distancia entre ponto: %.2f\n", d);
    Ponto_libera(q);
    Ponto_libera(p);
    return 0;
} */