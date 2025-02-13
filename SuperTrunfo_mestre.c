#include <stdio.h>
#include <string.h>

// 1 Definição da Estrutura Carta
// Define a estrutura que representa uma carta (cidade) com seus atributos
typedef struct {
// Criação das variáves.
    char estado[10]; // Sigla do estado
    char codigo[5]; // Código identificador da carta
    char nomeCidade[50]; // Nome da cidade
    int populacao; // Número de habitantes
    float area; // Área territorial em km²
    float pib; // Produto Interno Bruto (PIB) em bilhões de reais
    int pontosTuristicos; // Número de pontos turísticos
} Carta;

// 2 Funções Auxiliares

// Função para comparar um atributo específico de duas cartas
// Retorna 1 se carta1 for superior, 0 caso contrário
int compararAtributo(Carta carta1, Carta carta2, int atributo) {
    switch (atributo) {
        case 1: return carta1.populacao > carta2.populacao; // População
        case 2: return carta1.area > carta2.area; // Área
        case 3: return carta1.pib > carta2.pib; // PIB
        case 4: return carta1.pontosTuristicos > carta2.pontosTuristicos; // Pontos Turísticos
        default: return 0; // Opção inválida
    }
}

// Função para obter o nome do atributo a partir do seu código
const char* obterNomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        default: return "Desconhecido";
    }
}

// 3️ Função de Comparação de Cartas
// Compara duas cartas com base em dois atributos escolhidos pelo usuário
void compararCartas(Carta carta1, Carta carta2, int atributo1, int atributo2) {
    printf("\n Comparação entre %s e %s:\n", carta1.nomeCidade, carta2.nomeCidade);

    // Comparação do primeiro atributo
    printf("  %s: ", obterNomeAtributo(atributo1)); // Exibe o nome do atributo
    if (compararAtributo(carta1, carta2, atributo1)) // Compara os valores do atributo
        printf("%s vence!\n", carta1.nomeCidade); // Imprime o resultado da comparação
    else
        printf("%s vence!\n", carta2.nomeCidade);

    // Comparação do segundo atributo
    printf("  %s: ", obterNomeAtributo(atributo2)); // Exibe o nome do atributo
    if (compararAtributo(carta1, carta2, atributo2)) // Compara os valores do atributo
        printf("%s vence!\n", carta1.nomeCidade); // Imprime o resultado da comparação
    else
        printf("%s vence!\n", carta2.nomeCidade);

    // Lógica de decisão (exemplo: vitória por maioria)
    // Conta quantas vezes cada carta venceu nos atributos
    int vitorias1 = 0;
    if (compararAtributo(carta1, carta2, atributo1)) vitorias1++;
    if (compararAtributo(carta1, carta2, atributo2)) vitorias1++;

    // Declara a vencedora com base na contagem de vitórias
    if (vitorias1 == 2)
        printf("\n %s é a vencedora geral!\n", carta1.nomeCidade);
    else if (vitorias1 == 0)
        printf("\n %s é a vencedora geral!\n", carta2.nomeCidade);
    else
        printf("\n⚖️ Empate na decisão geral!\n");
}

// 4️ Função Principal (Menu)
int main() {
    // Cadastro das cartas (fixas no código)
    Carta carta1 = {"A", "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    Carta carta2 = {"B", "B02", "Rio de Janeiro", 6775561, 1200.27, 416.32, 40};

    int escolha1, escolha2; // Armazena as escolhas dos atributos

    do {
        // Exibe o menu interativo
        printf("\n ### MENU INTERATIVO ### ");
        printf("\nAtributos:");
        printf("\n1 - População");
        printf("\n2 - Área");
        printf("\n3 - PIB");
        printf("\n4 - Pontos Turísticos");
        printf("\n0 - Sair");

        // Solicita ao usuário que escolha o primeiro atributo
        printf("\nEscolha o primeiro atributo: ");
        scanf("%d", &escolha1);

        // Valida a escolha do primeiro atributo
        if (escolha1 > 0 && escolha1 <= 4) {
            // Solicita ao usuário que escolha o segundo atributo
            printf("Escolha o segundo atributo: ");
            scanf("%d", &escolha2);

            // Valida a escolha do segundo atributo
            if (escolha2 > 0 && escolha2 <= 4) {
                // Chama a função de comparação com os atributos escolhidos
                compararCartas(carta1, carta2, escolha1, escolha2);
            } else {
                printf("Opção de atributo inválida!\n");
            }
        } else if (escolha1 != 0) {
            printf("Opção de atributo inválida!\n");
        }

    } while (escolha1 != 0); // Mantém o menu em loop até o usuário digitar 0

    printf("Programa encerrado!\n");

    return 0;
}