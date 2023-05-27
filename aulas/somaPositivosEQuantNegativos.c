/******************************************************************************
 
 --Eduardo Idalgo - Algoritmos e Estruturas de Dados 2-- 01/03/2023

7) Faça um programa que preencha
um vetor com 10 números reais.

CALCULE E MOSTRE
A) A soma dos números positivos
desse vetor e a quantidade de negativos;

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#define TAM 10

void main(){
    setlocale(LC_ALL, "Portuguese");
    
    float v[TAM], somaPosit=0;
    int quantNeg=0;
    
    for(int i=0; i<TAM; i++){
        printf("Digite um valor v[%d]:\n", i);
        scanf("%f", &v[i]);
        if (v[i]<0){
            quantNeg++;
        }
        else{
            somaPosit+=v[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", quantNeg);
    printf("Soma dos números positivos: %f", somaPosit);
    
}
