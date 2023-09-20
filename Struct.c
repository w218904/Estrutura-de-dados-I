#include <stdio.h>

int main() {

    typedef struct {
        int idade;
        float altura, peso;
    } Atleta;

    Atleta a;

    printf("Digite a idade: ");
    scanf("%i", &a.idade);
    printf("Digite o altura: ");
    scanf("%f", &a.altura);
    printf("Digite o peso: ");
    scanf("%f", &a.peso);

    printf("A idade do atleta eh %i, a altura eh %0.2f e o peso eh %0.2f", a.idade, a.altura, a.peso);


    return 0;
}