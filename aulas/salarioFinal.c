/******************************************************************************

--Eduardo Idalgo - Algoritmos e Estruturas de Dados 2--

*******************************************************************************/
#include <stdio.h>

void main(){
    int numeroVendas;
    float salarioFixo, comissaoVenda, totalVendas, salarioFinal;
    
    printf("Quantos carros ele vendeu no mês?\n");
    scanf("%d", &numeroVendas);
    
    printf("Qual é o salário fixo dele?\n");
    scanf("%f", &salarioFixo);
    
    printf("Qual o valor total de suas vendas no mês?\n");
    scanf("%f", &totalVendas);
    
    printf("Qual o valor da comissão por carro?\n");
    scanf("%f", &comissaoVenda);
    
    salarioFinal = salarioFixo + (numeroVendas * comissaoVenda) + (0.05 * totalVendas);
    
    printf("O salário final do vendedor é R$%.2f", salarioFinal);
}
