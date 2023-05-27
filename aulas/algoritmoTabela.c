/******************************************************************************

--Eduardo Idalgo - Algoritmos e Estruturas de Dados 2--

Exercício 6)Considere o seguinte algoritmo. Realize o teste de mesa para os valores
dados e preencha o quadro:

*******************************************************************************/
#include <stdio.h>

void main(){
    int x,y,z;
    char resposta;
    
    printf("Valor de X:\n");
    scanf("%d", &x);
    printf("Valor de Y:\n");
    scanf("%d", &y);
    
    z = (x * y) + 5;
    
    if(z<=0)
        resposta = 'A';
    else if(z<=100)
        resposta = 'B';
    else
        resposta = 'C';
        
    printf("Z = %d e a Resposta = %c", z, resposta);
    
}*/
//Continuação exercício 6)
//Tabela      X       Y       Z       Resposta 
//            3       2       11          B
//            150     3       455         C
//            7      -1      -2           A
//           -2       5      -5           A
//            50      3       155         C
