#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
typedef struct {
    char nome[50];
    float pib; 
    float area; 
    int populacao; 
    int poder; 
} Cidade;

void definirPoder(Cidade *cidade) {
    if (cidade->pib > 100) {
        cidade->poder = 58; 
    } else if (cidade->pib > 50) {
        cidade->poder = 43; 
    } else if (cidade->pib > 20) {
        cidade->poder = 36; 
    } else {
        cidade->poder = 25;
    }
}

int main() {
    Cidade cidades[4] = {
        {"São Paulo", 700.0, 1521.11, 12325232},
        {"Campinas", 100.0, 795.70, 1213792},
        {"Santos", 50.0, 280.67, 433656},
        {"Sorocaba", 20.0, 450.00, 674000}
    };

    Cidade cidadeVencedora;
    cidadeVencedora.poder = 0; 

    for (int i = 0; i < 4; i++) {
        definirPoder(&cidades[i]);
        printf("Cidade: %s\n", cidades[i].nome);
        printf("PIB: R$ %.2f bilhões\n", cidades[i].pib);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Poder: %d\n\n", cidades[i].poder);

        
        if (cidades[i].poder > cidadeVencedora.poder) {
            cidadeVencedora = cidades[i];
        }
    }

    
    printf("A cidade vencedora é: %s com poder %d\n", cidadeVencedora.nome, cidadeVencedora.poder);

    return 0;
}