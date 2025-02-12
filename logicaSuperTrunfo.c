#include <stdio.h>
#include <string.h>

// 1 Definição da Estrutura
/*
     Estrutura (struct) chamada `Carta` que representa uma cidade em forma de carta.
     Contém os seguintes atributos:
   - estado: Sigla do estado da cidade (Ex: "SP")
   - codigo: Código identificador da carta (Ex: "A01")
   - nomeCidade: Nome da cidade (Ex: "São Paulo")
   - populacao: Número de habitantes
   - area: Área territorial em km²
   - pib: Produto Interno Bruto (PIB) em bilhões de reais
   - pontosTuristicos: Número de pontos turísticos cadastrados
*/
typedef struct {
    char estado[10];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// 2 Função de Comparação
/*
   Função `compararCartas` recebe duas cartas e um atributo para comparar.
   Parâmetros:
   - carta1`: Primeira carta a ser comparada
   - carta2`: Segunda carta a ser comparada
   - atributo`: Define qual característica será comparada (1 = População, 2 = Área, 3 = PIB, 4 = Pontos Turísticos)

   A função usa `switch` para decidir qual atributo comparar e imprime o resultado.
*/
void compararCartas(Carta carta1, Carta carta2, int atributo) {
    printf("\n Comparação entre %s e %s:\n", carta1.nomeCidade, carta2.nomeCidade);

    switch (atributo) {
        case 1:
            // Comparação de População
            printf("População: ");
            if (carta1.populacao > carta2.populacao)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.populacao < carta2.populacao)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        case 2:
            // Comparação de Área
            printf("Área: ");
            if (carta1.area > carta2.area)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.area < carta2.area)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        case 3:
            // Comparação do PIB
            printf("PIB: ");
            if (carta1.pib > carta2.pib)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.pib < carta2.pib)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        case 4:
            // Comparação de Pontos Turísticos
            printf("Número de Pontos Turísticos: ");
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("%s vence!\n", carta1.nomeCidade);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("%s vence!\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}


// 3 Função Principal (Menu)

/*
   Função principal `main()`
   - Cadastra duas cartas fixas (São Paulo e Rio de Janeiro)
   - Exibe um menu interativo para o usuário escolher qual atributo comparar
   - Usa `do-while` para manter o menu ativo até o usuário escolher sair (opção 0)
*/
int main() {
    // Cadastro das cartas (fixas no código)
    Carta carta1 = {"A", "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    Carta carta2 = {"B", "B02", "Rio de Janeiro", 6775561, 1200.27, 416.32, 40};

    int escolha; // Armazena a escolha do usuário no menu

    do {
        // Exibe o menu interativo
        printf("\n ### MENU INTERATIVO ### ");
        printf("\n1 - Comparar População");
        printf("\n2 - Comparar Área");
        printf("\n3 - Comparar PIB");
        printf("\n4 - Comparar Pontos Turísticos");
        printf("\n0 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &escolha);

        // Chama a função de comparação se o usuário escolher uma opção válida
        if (escolha > 0 && escolha <= 4) {
            compararCartas(carta1, carta2, escolha);
        }

    } while (escolha != 0); // Mantém o menu ativo até o usuário escolher 0 para sair

    printf("Programa encerrado!\n"); // Mensagem final ao sair do programa

    return 0;
}