/******************************************************************************

Eduardo Idalgo
Lista Modularização
3. Escreva um programa que calcule a área de um círculo
a partir de uma função desenhada especialmente pra isso;
essa função recebe o valor do raio e retorna a área do círculo;

*******************************************************************************/
#include <stdio.h>
#define PI 3.1415
//Função areaDoCirculo recebe o raio e calcula a área do círculo
float areaDoCirculo(float raio) {
    return PI * (raio * raio); 
}
void main() {
    float raio;
//Entrada de dados
    printf("Entre com o valor do raio do círculo que você quer calcular a área: ");
    scanf("%f", &raio);
//Saída
    printf("A área do círculo é: %.2f", areaDoCirculo(raio));
}
