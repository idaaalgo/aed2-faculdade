/******************************************************************************

--- Eduardo Coutinho Idalgo ---
    
    Exercício 1)
        Faça um programa que receba os três lados de um triângulo
        e faça as seguintes atividades:
        retornar se os três lados realmente formam um triângulo
        e que tipo de triângulo é este.
        Cada uma destas atividades deve ser uma função.

*******************************************************************************/
#include <stdio.h>
int leia();
int formaTriangulo();
void mostraTriangulo();

int main() {
    printf("Digite os 3 lados : \n");
    
    int a = leia(), b = leia(), c = leia ();
    
    
    if (formaTriangulo(a,b,c)){
        printf("Estes valores formam um triângulo ");
    } 
    else{
        printf("Estes valores não formam um triângulo");
        return 0;
    }
    
    mostraTriangulo(a,b,c);
    
    return 0;
}

int leia(){
    int num;
    scanf("%d", &num);
    
    while(num <= 0){
        printf("Numero inválido, Digite um número maior que 0 :\n");
        scanf("%d", &num);
        
    }
        
    return num;
}

int formaTriangulo(int a,int b,int c){
    
    return(a + b > c && b + c > a && a + c > b);
}

    void mostraTriangulo(int a, int b, int c){
    
    //escaleno - equilatero - isosceles 
    
    if (a == b && b == c){
        printf("equilátero !");
    }else{
        if(a == b || a == c || c == b){
            printf("isosceles !");
        }else{
            printf("escaleno !");
        }
    }
}
