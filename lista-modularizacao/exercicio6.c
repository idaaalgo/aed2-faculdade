/******************************************************************************

Eduardo Idalgo
Lista Modularização
6. Escreva um programa que implemente
uma função que passe dado número
equivalente a "*" na tela.

*******************************************************************************/
#include <stdio.h>

void desenhaNumero(int num) {
    switch(num) {
        case 0:
            printf("*****\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 1:
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 2:
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            break;
        case 3:
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        case 4:
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 5:
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        case 6:
            printf("*****\n");
            printf("*    \n");
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 7:
            printf("*****\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            printf("    *\n");
            break;
        case 8:
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            break;
        case 9:
            printf("*****\n");
            printf("*   *\n");
            printf("*****\n");
            printf("    *\n");
            printf("*****\n");
            break;
        default:
            printf("O número deve estar entre 0 e 9.\n");
            break;
    }
}

void main() {
    int num;
    printf("Entre com um valor de 0 a 9: \n");
    scanf("%d", &num);
    desenhaNumero(num);
}
