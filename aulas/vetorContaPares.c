/******************************************************************************
 
 --Eduardo Idalgo - Algoritmos e Estruturas de Dados 2-- 01/03/2023

3) Leia um vetor de 10
posições.
Conte e escreva quantos
valores pares ele possui

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#define TAM 10

void main(){
    setlocale(LC_ALL, "Portuguese");
    
    int numeros[TAM], pares = 0;
    
    for(int i=0; i<TAM; i++){
        printf("Digite um valor v[%d]:\n", i);
        scanf("%d", &numeros[i]);
    }
    for(int i=0; i<TAM;i++){
        if(numeros[i] % 2 == 0){
            pares+=1;
        }
    }
    printf("Quantidade de números pares: %d", pares);
    
}
