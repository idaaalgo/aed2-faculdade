/******************************************************************************

Eduardo Idalgo
Lista Modularização
2. Escreva uma função que retorne a divisão entre dois números inteiros.
Atenção para a questão da divisão por zero!
A divisão não pode ocorrer se o divisor for zero

*******************************************************************************/
#include <stdio.h>


/*A função retornaDivisao recebe dividendo e divisor
e retorna o resultado de dividendo/divisor.
Caso o valor do divisor seja diferente de 0
a função ocorre normalmente, caso contrário
a função retorna 0*/
float retornaDivisao(int dividendo, int divisor) {
    while(divisor == 0) {
        printf("Valor de divisor 0 é inválido!\nDigite novamente outro valor: ");
        scanf("%d", &divisor);
    }
    return (float)dividendo/divisor;
}

void main() {
    
    int dividendo, divisor;
   //Entrada de dados.
    printf("Entre com o valor do dividendo: ");
    scanf("%d", &dividendo);
    printf("Entre com o valor do divisor diferente de 0: ");
    scanf("%d", &divisor);
   /*A variável resultado chama a função retornaDivisao
   e guarda o resultado para si*/
    float resultado = retornaDivisao(dividendo, divisor);
//Saída
    printf("A divisão de %d por %d é %.3f", dividendo, divisor, resultado);
}
