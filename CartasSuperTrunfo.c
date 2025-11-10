#include <stdio.h>
#include <string.h>

// Definição da estrutura para a Carta de Cidade
typedef struct {
    char codigo[4];             // Ex: A01
    char cidade[20];            // Nome da cidade
    long populacao;             // Valor em pessoas
    float area;                 // Valor em km²
    float pib;                  // Valor em Bilhões
    int pontos_turisticos;      // Número de locais
} CartaCidade;

// Função para exibir os dados de uma única carta
void exibir_carta(CartaCidade carta) {
    printf("--------------------------------\n");
    printf("**CÓDIGO:** %s\n", carta.codigo);
    printf("**CIDADE:** %s\n", carta.cidade);
    printf("  População: %ld pessoas\n", carta.populacao);
    printf("  Área: %.2f km²\n", carta.area);
    printf("  PIB: R$ %.2f Bilhões\n", carta.pib);
    printf("  Pontos Turísticos: %d locais\n", carta.pontos_turisticos);
}

int main() {
    // 🃏 Inicialização direta e básica do array de cartas (4 cidades)
    CartaCidade baralho[4] = {
        // CARTA 1: PORTO ALEGRE (RS) - Estado A, Cidade 01
        {"A01", "Porto Alegre", 1492536L, 496.8F, 90.5F, 12}, 
        
        // CARTA 2: CURITIBA (PR) - Estado B, Cidade 01
        {"B01", "Curitiba", 1963726L, 435.0F, 115.2F, 15},
        
        // CARTA 3: FLORIANÓPOLIS (SC) - Estado C, Cidade 01
        {"C01", "Florianopolis", 537213L, 675.4F, 25.8F, 20},
        
        // CARTA 4: JOINVILLE (SC) - Estado C, Cidade 02
        {"C02", "Joinville", 616323L, 1136.0F, 35.1F, 8}
    };

    printf("=== Sistema Super Trunfo BÁSICO: Cidades do Sul ===\n");

    // Loop simples para exibir cada uma das 4 cartas
    for (int i = 0; i < 4; i++) {
        exibir_carta(baralho[i]);
    }
    printf("--------------------------------\n");

    return 0;
}