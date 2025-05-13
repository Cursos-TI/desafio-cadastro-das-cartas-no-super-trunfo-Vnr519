
// Nível Novato - Super Trunfo de Cidades
#include <stdio.h>

// Definindo a estrutura da Carta
struct Carta {
    char estado[4];         // 2 caracteres + \0
    char codigo[5];         // 3 caracteres + \0
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Função para ler os dados de uma carta
void lerCarta(struct Carta* carta, int numero) {
    printf("\nDigite os dados da Carta %d:\n", numero);
    printf("Estado (ex: SP): ");
    scanf(" %3s", carta->estado);

    printf("Código da Carta (ex: C01): ");
    scanf(" %4s", carta->codigo);
    getchar(); // Limpa o '\n' restante

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta, int numero) {
    printf("\n--- Carta %d ---\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    struct Carta carta1, carta2;

    // Ler dados das duas cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Exibir as cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
