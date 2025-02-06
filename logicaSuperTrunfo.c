#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main(){
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacaoCid1, populacaoCid2;
    float areaCid1, areaCid2;
    float pibCid1, pibCid2;
    int pontosTuristicoscid1, pontosTuristicoscid2;
        
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo: ----------------------------------------------------------------------------------------------
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade) ------------------------------------------------------------------------

        printf("**** DIGITE OS DADOS DA PRIMEIRA CIDADE **** \n");
        printf("Digite Nome Estado.\n");
            scanf("%s", estado1);
        printf("Digite Código. \n");
            scanf("%s", codigo1);
        printf("Digite nome da Cidade \n");
            scanf("%s", nomeCidade1);
        printf("Digite numero da população. \n");
            scanf("%d", &populacaoCid1);
        printf("Digite Área. \n");
            scanf("%f", &areaCid1);
        printf("Digite PIB. \n");
            scanf("%f", &pibCid1);
        printf("Digite os pontos turísticos. \n");
            scanf("%d", &pontosTuristicoscid1);
        printf("OBS: Digite os Dados da Segunda Cidade, Começando pelo Estado.\n");
            scanf("%s", estado2);
        printf("Digite Código. \n");
            scanf("%s", codigo2);
        printf("Digite nome da Cidade. \n");
            scanf("%s", nomeCidade2);
        printf("Digite nº população. \n");
            scanf("%d", &populacaoCid2);
        printf("Digite Área. \n");
            scanf("%f", &areaCid2);
        printf("Digite PIB. \n");
            scanf("%f", &pibCid2);
        printf("Digite os pontos turísticos. \n");
            scanf("%d", &pontosTuristicoscid2);
        
        if (populacaoCid1 < populacaoCid2){
            printf("Cidade 1  tem maior população. \n");
        }else{
            printf("Cidade 2 tem maior população. \n");
        }

        if (areaCid1 > areaCid2){
            printf("Área da Cidade 1 é maior. \n");
        }else{
            printf("Área da cidade 2 é maior \n");
        }

        if (pibCid1 > pibCid2){
            printf("PIB Cidade 1 e maior. \n");
        }else{
            printf("PIB Cidade 2 é Maior. \n");
        }
        if (pontosTuristicoscid1 > pontosTuristicoscid2){
            printf("Pontos turísticos da Cidade 1 é Maior. \n");
        }else{
            printf("Ponto turísticos da Cidade 2 é Maior. \n");
        }


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }-----------------------------------------------------------------------------------------------------



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    printf("A cidade vencedora é: %s\n", nomeCidade1,nomeCidade2);
    

    return 0;
}
