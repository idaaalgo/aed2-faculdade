/******************************************************************************

Eduardo Coutinho Idalgo - 26/04/2023

struct Aluno

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void main(){
    
    struct aluno{
        int RA;
        char nome[30];
        float nota;
    };
    
    struct aluno a;
    
    printf("Digite o nome do aluno");
    gets(a.nome);
    
    printf("Digite o RA do aluno");
    scanf("%d", &a.RA);
    
    printf("Digite a nota do aluno");
    scanf("%f", &a.nota);
    
    printf("%s\n%d\n%.1f", a.nome, a.RA, a.nota);
}
