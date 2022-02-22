#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "biblioteca2.h"

int main(){
	int op = -1;
    int op9 = 0;
    int sair = 0;
    Vetor* array;
    Vetor* array2;
    while (sair == 0){
        printf(">>>>> Menu \n");
        printf("[1] - Criar vetor. \n");
        printf("[2] - Liberar a memória alocada para o vetor. \n");
        printf("[3] - Saber o tamanho do vetor. \n");
        printf("[4] - Acessar conteúdo de determinado posição do vetor. \n");
        printf("[5] - Atribuir um conteúdo 'c' a uma determinada posição do vetor. \n");
        printf("[6] - Ordenar vetor. \n");
        printf("[7] - Listar vetor. \n");
        printf("[8] - Somar todos os elementos do vetor.\n");
        printf("[9] - Somar dois vetores correspondentes e retornar a soma em um vetor.\n");
        printf("[0] - Sair. \n");
        scanf("%d", &op);

        if (op == 1) {
            int tam, i;
            printf("Informe o tamanho do vetor:\n");
            scanf("%d", &tam);
            if(tam < 1){
                printf("ERROR - Tamanho nao pode ser negativo ou nulo.");
                exit(1);
            }
            array = criaVetor(tam);
            op9=1;
            printf("Vetor criado com sucesso!\n");
        }
        else if( op == 2 ){
            liberaVetor(array);
            op9 = 1;
            printf("Vetor liberado com sucesso!\n");
        }
        else if( op == 3 ){
            printf("Tamanho do vetor: %d\n", tamanhoVetor(array));
        }
        else if( op == 4 ){
            int posi;
            printf("Informe a posicao quer voce quer acessar no vetor:\n");
            scanf("%d", &posi);
            int check = tamanhoVetor(array);
            if(posi < 0 || posi > check-1){
                printf("ERROR - A posicao nao pode ser negativo ou maior que o vetor. Considere sempre comecando em 0. (0,1,..)");
                exit(1);
            }
            printf("O conteudo do vetor na posicao '%d' e o valor: [%f]\n", posi, acessa(array, posi));
        }
        else if( op == 5 ){
            int posi, valor;
            printf("Informe qual POSICAO voce quer alterar no vetor:\n");
            scanf("%d", &posi);
            int check = tamanhoVetor(array);
            if(posi < 0 || posi > check-1){
                printf("ERROR - A posicao nao pode ser negativo ou maior que o vetor. Considere sempre comecando em 0. (0,1,..)");
                exit(1);
            }
            printf("Informe qual o novo VALOR para essa posicao no vetor:\n");
            scanf("%d", &valor);
            atribui(array, posi, valor);
            printf("Operacao feita com sucesso!\n");
        }
        else if( op == 6 ){
            ordena(array);
            printf("Operacao feita com sucesso!\n");
        }
        else if( op == 7 ){
            printf("Lista dos vetores:\n");
            listar(array);
        }
        else if( op == 8 ){
            printf("O resultado da soma é: %f\n", somaElementosVetor(array));
        }
        else if( op == 9 ){
            if (op9 == 0)
                printf("ERROR - Crie o primeiro vetor antes.\n");
            else {
                int t, i;
                printf("Informe o tamanho do SEGUNDO vetor:\n");
                scanf("%d", &t);
                array2 = criaVetor(t);
                printf("Vetor criado com sucesso!\n");
                printf("O resultado da soma dos dois vetores correspondente:\n");
                Vetor* array3 = somaVetores(array, array2);
                listar(array3);
            }
        }
        else if( op == 0 ){
            sair = -1;
        }
        else if( op < 0 || op > 9){
            printf("Opcao digitada invalida, tente novamente!\n");
        }
    }
    return 0;
}