/******************************************************************************
 
 --Eduardo Idalgo - Algoritmos e Estruturas de Dados 2-- 02/03/2023

LISTA 2 - EXERCÍCIO 2
          Faça um programa que leia um vetor
          de 8 posições e, em seguida, leia
          também dois valores X e Y quaisquer
          correspondentes a duas posições no 
          vetor. Ao final seu programa deverá
          escrever a soma dos valores encontrados
          nas respectivas posições X e Y.

*******************************************************************************/

#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, y, soma;
    
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%d", &v[i]);
    }
    
    printf("Digite o valor da primeira posição a ser somada: \n");
    scanf("%d", &x);
    printf("Digite o valor da segunda posição a ser somada: \n");
    scanf("%d", &y);
    
    if(x < 0 || x >= 8 || y < 0 || y >= 8){
        printf("Posição inválidos");
    }
    else{
        soma = v[x] + v[y];
        printf("Soma da posição %d e da posição %d = %d", x, y, soma);
    }
    
    
    
}
