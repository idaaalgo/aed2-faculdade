/******************************************************************************

-----Eduardo Coutinho Idalgo-----

Exercícios de 29/03 no lab 4

2. Implementar a função verificaIntervalo com e sem if

*******************************************************************************/
#include <stdio.h>

int verificaIntervalo();

void main() {
    
    int max, min, n;
    
    printf("Entre com o menor valor do intervalo: \n");
    scanf("%d", &min);
    
    printf("Entre com o maior valor do intervalo: \n");
    scanf("%d", &max);
    
    printf("Entre com o valor do número que será verificado no intervalo: \n");
    scanf("%d", &n);
    
    if(verificaIntervalo(max, min, n) == 1){
        printf("O valor %d, está no intervalo de %d e %d!", n, min, max);
    } else {
        printf("O valor %d, não está no intervalo de %d e %d!", n, min, max);
    }
    
}

int verificaIntervalo(int max, int min, int n){
    
    return (n >= min && n <= max);
    
}
