/******************************************************************************
 
 --Eduardo Idalgo - Algoritmos e Estruturas de Dados 2-- 01/03/2023

lISTA 2 - EXERCÍCIO 4
          A) imprima o maior elemento 
          B) imprima a posição do maior elemento

*******************************************************************************/

#include <stdio.h>
#define TAM 10

int main()
{
    int v[TAM], maior, posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    maior=v[0];
    for (int i=0; i<TAM; i++) {
        if(maior<v[i]){
            maior=v[i];
            posicao=i;
        }
    }
    printf("\nO maior elemento é %d e está na posição %d", maior, posicao);

    return 0;
}
