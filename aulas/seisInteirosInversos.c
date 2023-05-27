/******************************************************************************
 
 --Eduardo Idalgo - Algoritmos e Estruturas de Dados 2-- 01/03/2023

Crie um programa que leia 6 valores inteiros.
Em seguida, mostre os valores em ordem inversa.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#define TAM 6

void main(){
    setlocale(LC_ALL, "Portuguese");
    
    int numeros[TAM], i;
    
    printf("Digite um valor inteiro:\n");
    
    for(i=0; i<TAM; i++){
        printf("Digite um valor v[%d]:\n", i);
        scanf("%d", &numeros[i]);
    }
    printf("Os valores ao inverso são:\n");
    for(i=(TAM-1);i>=0;i--){
        printf("%d \n",numeros[i]);
    }
    
}
