/******************************************************************************

Eduardo Idalgo
Lista Modularização
7. Escreva uma função que retorne o cubo do valor passado como argumento.

*******************************************************************************/
#include <stdio.h>
//Função pega um inteiro que é multiplicado 3x
//por ele mesmo retornando o valor ao cubo do número 
int retornaCubo(int num) {
    int cubo = num * num * num;
    return cubo; 
}

void main() {
    int num;
    //Entrada de dados
    printf("Entre com um número inteiro para descobrir seu valor ao cubo: \n");
    scanf("%d", &num);
//Saídas    
    printf("%d ao cubo é = %d", num, retornaCubo(num));
//ou
//  int cubo = retornaCubo(num);
//  printf("%d ao cubo é = %d", num, cubo);
}
