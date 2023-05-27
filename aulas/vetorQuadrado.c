/******************************************************************************
 
 --Eduardo Idalgo - Algoritmos e Estruturas de Dados 2-- 02/03/2023

LISTA 2 - EXERCÍCIO 1
          Ler um conjunto de números reais, armazenando-o
          em vetor e calcular o quadrado das componentes
          deste vetor, armazenando o resultado em outro vetor.
          Os conjuntos tem 10 elementos cada. Imprimir todos
          os conjuntos(Vetores).

*******************************************************************************/

#include <stdio.h>
#define TAM 10

void main()
{
    float v[TAM], vQuadrado[TAM];
    
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%f", &v[i]);
    }
    for (int i=0; i<TAM;i++){
        vQuadrado[i] = (v[i] * v[i]);
        printf("valor de v[%d]: %f e o seu quadrado é: %f\n", i, v[i], vQuadrado[i]);
        
    }
    
    
}

