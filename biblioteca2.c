#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "biblioteca2.h"

struct vetor {
    int tamanho;
	float *elementos;
} typedef Vetor;

Vetor* criaVetor(int n){
	Vetor* v = (Vetor*) malloc(sizeof(Vetor));
    int i;
	v->elementos = (float *)malloc(sizeof(float)*n);
	v->tamanho = n;
    printf("Informe os valores do vetor:");
    for (i = 0; i < v->tamanho; i++){
        scanf("%f", &v->elementos[i]);
    }
	return v;
}

void liberaVetor(Vetor* v){
    v->tamanho = 0;
	free(v->elementos);
}

int tamanhoVetor(Vetor* v){
	return v->tamanho;
}

float acessa(Vetor* v, int n){
	int i = 0;
	for(i = 0; i < v->tamanho; i ++){
		if (i == n){
			return v->elementos[i];
        }
	}
    printf("ERROR - Não encontrei.");
	return -1;
}

void atribui(Vetor* v, int i, float c){
	Vetor* novo = v;
	int n;
	for(n = 0; n < v->tamanho; n++){
		if (n == i) { 
			novo->elementos[n] = c;
        }
	}
}

void swap(float *xp, float *yp) {
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(float arr[], int n) {
   int i, j;
   for (i = 0; i < n-1; i++)     
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void ordena(Vetor* v){
	bubbleSort(v->elementos, v->tamanho);
}

void listar(Vetor* v){
	int i;
	for( i=0; i < v->tamanho; i++){
		printf("%f", v->elementos[i]);
        printf("\n");
	}
	
}

float somaElementosVetor(Vetor* v){
    int sum = 0;
    for (int i = 0; i < v->tamanho; i++)
    	sum += v->elementos[i];
    return sum;
}

Vetor* somaVetores(Vetor* v1, Vetor* v2){
	if(v1->tamanho != v2->tamanho) 
        printf("ERROR - Tamanhos diferentes.");
	Vetor* v3 = (Vetor*) malloc(sizeof(Vetor));
	v3->elementos = (float *)malloc(sizeof(float)*v1->tamanho);
	v3->tamanho = v1->tamanho;
	int sum = 0;
    for (int i = 0; i < v1->tamanho; i++) {
    	sum = v1->elementos[i] + v2->elementos[i];
		v3->elementos[i] = sum;
		sum=0;
	}
    return v3;
}