/******************************************************************************

Eduardo Idalgo
Lista Modularização
5. Crie uma função que determina se dado caracter está entre 'a' e 'z'.
Dica: Use a tabela ASCII.

*******************************************************************************/
#include <stdio.h>

int entre_a_e_z(char c) {
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return 1;
    } 
    return 0;
}

int main() {
    char c;
    printf("Digite um caracter: \n");
    scanf("%c", &c);
    if (entre_a_e_z(c)) {
        printf("%c Está entre 'a/A' e 'z/Z'\n", c);
    } else {
        printf("%c Não está entre 'a/A' e 'z/Z'\n", c);
    }
    return 0;
}
