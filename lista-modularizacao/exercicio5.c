/******************************************************************************

Eduardo Idalgo
Lista Modularização
5. Crie uma função que determina se dado caracter está entre 'a' e 'z'.
Dica: Use a tabela ASCII.

*******************************************************************************/
#include <stdio.h>

//Essa função recebe um caracter,
//e verificae se ele está entre a/A e z/Z
int entre_a_e_z(char c) {
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return 1;
    } 
    return 0;
}

void main() {
    char c;
    //Entrada de dados
    printf("Digite um caracter: \n");
    scanf("%c", &c);
    //Lógica do programa
    
    //Se ele estiver dentro de a e z usando a função,
    //imprime na tela "%c Está entre 'a/A' e 'z/Z'"
    if (entre_a_e_z(c)) {
        printf("%c Está entre 'a/A' e 'z/Z'\n", c);
    } else {//Caso contrário, imprime "%c Não está entre 'a/A' e 'z/Z'" 
        printf("%c Não está entre 'a/A' e 'z/Z'\n", c);
    }
    
}
