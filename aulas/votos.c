/******************************************************************************

--Eduardo Idalgo - Algoritmos e Estruturas de Dados 2--

*******************************************************************************/
#include <stdio.h>

void main(){
    
    int votos_totais, votos_brancos, votos_nulos, votos_validos;
    
    printf("Digite o Números de votos totais: ");
    scanf("%d", &votos_totais);
    printf("Digite o Números de votos brancos: ");
    scanf("%d", &votos_brancos);
    printf("Digite o Números de votos nulos: ");
    scanf("%d", &votos_nulos);
    votos_validos = votos_totais - votos_nulos - votos_brancos;
    printf("Total de votos válidos: %d \n", votos_validos);
    
    printf("A porcentagem de votos nulos é %.2f %% \n", (votos_nulos * 1.0) / votos_totais *100);
    printf("A porcentagem de votos válidos é %.2f %% \n", (votos_validos * 1.0) / votos_totais *100 );
    printf("A porcentagem de votos em branco é %.2f %% \n", (votos_brancos * 1.0) / votos_totais *100);
    
}
