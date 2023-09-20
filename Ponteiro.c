#include <stdio.h>

void main() {

    int idade, *ptrIdade;
    idade = 40;
    ptrIdade = &idade;
    printf("Endereco: %d - Valor: %d\n", &idade, idade);
    printf("Endereco: %d - Valor: %d\n", &ptrIdade, ptrIdade);
    printf("PTR Vpont: %d\n", *ptrIdade);

    
}