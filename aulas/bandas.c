/******************************************************************************

Eduardo Idalgo e Arthur Café

AP das Bandas

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define TAMANHO 100

typedef struct{
    char nome[50];
    char estilo[50];
    int tamanho;
    int rank;
}BANDA;

void leBanda(BANDA *v, int qt) {
    for(int i = 0; i < qt; i++) {
        printf("***********************************\n");
        printf("Digite o nome da banda %d\n", i + 1);
        scanf("%s", v[i].nome);
        printf("Digite o estilo musical da banda %d\n", i + 1);
        scanf("%s", v[i].estilo);
        printf("Digite a quantidade de integrantes da banda %d\n", i + 1);
        scanf("%d", &v[i].tamanho);
        printf("Digite o rank da banda %d\n", i + 1);
        scanf("%d", &v[i].rank);
        printf("***********************************\n");
        if(v[i].rank > qt) {
            printf("Digite um número entre 1 e %d", qt);
            scanf("%d", &v[i].rank);
        }
    }
}

void buscaPorNome(BANDA *busca, int qt) {
    char aux[50];
    int achou = 0;
    printf("Qual é o nome da banda que você quer procurar?\n");
    scanf("%s", aux);
    for(int i = 0; i < qt; i++) {
        if(strcmp(busca[i].nome, aux) == 0) {
            achou = 1;
            printf("Nome: %s\n", busca[i].nome);
            printf("Estilo da banda: %s\n", busca[i].estilo);
            printf("Quantidade de integrantes: %d\n", busca[i].tamanho);
            printf("Rank(Avaliação pessoal): %d\n", busca[i].rank);
        }
    }
    if(!achou) {
        printf("Banda não encontrada...\n");
    }
}

void buscaPorEstilo(BANDA *busca, int qt) {
    char aux[30];
    int achou = 0;
    printf("Qual estilo você quer procurar?\n");
    scanf("%s", aux);
    for(int i = 0; i < qt; i++) {
        if(strcmp(busca[i].estilo, aux) == 0) {
            achou = 1;
            printf("***********************************\n");
            printf("Nome da banda: %s\n", busca[i].nome);
            printf("Estilo da banda: %s\n", busca[i].estilo);
            printf("Quantidade de integrantes: %d\n", busca[i].tamanho);
            printf("Rank(Avaliação pessoal): %d\n", busca[i].rank);
            printf("***********************************\n");

        }
    }
    if(!achou) {
        printf("Estilo não encontrado...");
    }
}

void listaBandas(BANDA *exib, int qt) {
    for(int i = 0; i < qt; i++) {
        printf("***********************************\n");
        printf("Nome da banda: %s\n", exib[i].nome);
        printf("Estilo da banda: %s\n", exib[i].estilo);
        printf("Quantidade de integrantes: %d\n", exib[i].tamanho);
        printf("Rank(Avaliação pessoal): %d\n", exib[i].rank);
        printf("***********************************\n");
    }
}

void menu(){
    BANDA v[TAMANHO];
    int opcao = 0, qt;
    do{
        printf("********************************************\n");
        printf("Digite o número da opção que você quer usar \n");
        printf("1 - Ler a banda\n");
        printf("2 - Buscar por nome\n");
        printf("3 - Buscar por estilo\n");
        printf("4 - Lista todas as bandas\n");
        printf("9 - Sair\n");
        printf("********************************************\n");
        printf("Digite o número de uma das opções ou 9 para finalizar a aplicação: \n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite a quantidade de bandas a serem cadastradas: \n");
                scanf("%d", &qt);
                leBanda(v, qt);
                break;
            case 2:
                buscaPorNome(v, qt);
                break;
            case 3:
                buscaPorEstilo(v, qt);
                break;
            case 4:
                listaBandas(v, qt);
                break;
            case 9:
                printf("Finalizando aplicação...");
                break;
            default:
                printf("Número inválido, digite novamente!");
                break;
        }
    } while(opcao != 9);
}

void main() {
    menu();
}
