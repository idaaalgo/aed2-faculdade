/******************************************************************************

-----Eduardo Coutinho Idalgo-----

Exercícios de 29/03 no lab 4

3. Implementar e testar a função retornaPosicao.

*******************************************************************************/
#include <stdio.h>

int retornaPosicao();

void main() {
    
    int a, b, c, posicao;
    
    printf("Entre com o valor da primeira posição: \n");
    scanf("%d", &a);
    
    printf("Entre com o valor da segunda posição: \n");
    scanf("%d", &b);
    
    printf("Entre com o valor da terceira posição: \n");
    scanf("%d", &c);
    
    posicao = retornaPosicao(a, b, c);
    
    printf("A posição do maior número entre os três é %d", posicao);
    
}

int retornaPosicao(int a, int b, int c) {
    
    int posicao = 1;
    if(b > a) posicao = 2;
    if(c > a) posicao = 3;
    
    return posicao;
    
}
