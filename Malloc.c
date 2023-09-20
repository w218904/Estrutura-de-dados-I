#include <stdio.h>
#include <stdlib.h>

int main() {

    typedef struct {
        int dia, mes, ano;
    } data;

    data *d;

    d = malloc (sizeof(data));

    d -> dia = 9;
    d -> mes = 3;
    d -> ano = 1996;

    printf("%d/%d/%d", d -> dia, d -> mes, d -> ano);

    return 0;
}