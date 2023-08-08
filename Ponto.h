typedef struct ponto Ponto;
//Cria um novo ponto
Ponto* Ponto_cria(float x, float y);
//Libera um ponto
void Ponto_libera(Ponto* p);
//Acesa is valores "x" e "y" de um ponto
int Ponto_acessa(Ponto* p, float* x, float* y);
//Atribui os vlaores "x" e "y" a um ponto
int Ponto_atribui (Ponto* p, float x, float y);
//Calcula a dinstância entre dois ponto
float Ponto_distancia(Ponto* p1, Ponto* p2);