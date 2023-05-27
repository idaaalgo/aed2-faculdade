/******************************************************************************

-----Eduardo Coutinho Idalgo-----

Exercícios de 29/03 no lab 4

1. Alterar a funcao muda (int n) para retornar um int.
Informar qual alteração deve ser feita no main
para mostrar o valor alterado (Esse deve ser o novo valor de n.)

*******************************************************************************/
#include <stdio.h>

int muda (int n);
void muda2 ();

void main() {
    
    int n = 5;
    printf("n = %d antes da chamada muda\n", n);
    
    n = muda(n);
    printf("n = %d depois da chamada de muda", n);
    
}

int muda(int n) {
    
    n = 10;
    printf("n = %d dentro da chamada de muda", n);
    
    return n;
    
}

void muda2() {
    
    int n = 10;
    printf("n = %d dentro da chamada de muda2", n);
    
}
