typedef struct vetor Vetor;

Vetor* criaVetor(int n);

void liberaVetor(Vetor* v);

int tamanhoVetor(Vetor* v);

float acessa(Vetor* v, int i);

void atribui(Vetor* v, int i, float c);

void ordena(Vetor* v);

void listarVetor(Vetor* v);

float somaElementosVetor(Vetor* v);

Vetor* somaVetores(Vetor* v1, Vetor* v2);