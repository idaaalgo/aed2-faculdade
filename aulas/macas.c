/******************************************************************************

--Eduardo Idalgo - Algoritmos e Estruturas de Dados 2--

*******************************************************************************/
#include <stdio.h>

void main(){
    
    float precoUnidade = 1.30;
    int quantMacas;
    
    printf("Quantas maçãs foram compradas?\n");
    scanf("%d", &quantMacas);
    
    if(quantMacas>=12){
        precoUnidade = 1.0;
        precoUnidade *= quantMacas;
        printf("O preço total da compra foi R$%.2f", precoDuzia);
    }else{
        precoUnidade *= quantMacas;
        printf("O preço total da compra foi R$%.2f", precoUnidade);
    }

}
