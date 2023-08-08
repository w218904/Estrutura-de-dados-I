#include <stdlib.h>
#include <math.h>
#include "Ponto.h"
#include "Ponto.c"

int main() {
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
}