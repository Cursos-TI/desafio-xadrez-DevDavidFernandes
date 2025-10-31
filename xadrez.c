#include <stdio.h>

// Constantes
#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8

// Movimentos com Recursividade

// Função Recursiva para a Torre (Direita)
void movimento_torre_recursivo(int casas_restantes) {
    if (casas_restantes > 0) {
        printf("Direita\n");
        movimento_torre_recursivo(casas_restantes - 1);
    }
}

// Função Recursiva para o Bispo (Cima Direita)
void movimento_bispo_recursivo(int casas_restantes) {
    if (casas_restantes > 0) {
        printf("Cima Direita\n");
        movimento_bispo_recursivo(casas_restantes - 1);
    }
}

// Função Recursiva para a Rainha (Esquerda)
void movimento_rainha_recursivo(int casas_restantes) {
    if (casas_restantes > 0) {
        printf("Esquerda\n");
        movimento_rainha_recursivo(casas_restantes - 1);
    }
}

// NÍVEL BÁSICO: Movimentos com Loops Simples (Mantidos para referência)

void movimento_torre_basico() {
    printf("--- NÍVEL BÁSICO: Movimento da TORRE (for) ---\n");
    printf("Movimento: %d casas para a Direita\n", CASAS_TORRE);
    
    // Requisito: Usar loop 'for'
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

void movimento_bispo_basico() {
    printf("--- NÍVEL BÁSICO: Movimento do BISPO (while) ---\n");
    printf("Movimento: %d casas na Diagonal (Cima e Direita)\n", CASAS_BISPO);
    
    // Requisito: Usar loop 'while'
    int i = 0;
    while (i < CASAS_BISPO) {
        // Requisito: Imprimir a combinação de duas direções
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
}

void movimento_rainha_basico() {
    printf("--- NÍVEL BÁSICO: Movimento da RAINHA (do-while) ---\n");
    printf("Movimento: %d casas para a Esquerda\n", CASAS_RAINHA);
    
    // Requisito: Usar loop 'do-while'
    int i = 0;
    if (CASAS_RAINHA > 0) { // Garante que o loop só execute se houver movimento
        do {
            printf("Esquerda\n");
            i++;
        } while (i < CASAS_RAINHA);
    }
    printf("\n");
}

// Constantes para o Nível Intermediário
#define CASAS_CAVALO_VERTICAL 2
#define CASAS_CAVALO_HORIZONTAL 1

// NÍVEL MESTRE: Movimento do Cavalo com Loops Complexos

void movimento_cavalo_mestre() {
    printf("--- NÍVEL MESTRE: Movimento do CAVALO (Loops Complexos) ---\n");
    printf("Movimento: 2 casas para Cima e 1 casa para a Direita (Loops Complexos)\n");
    
    // Requisito: Loops aninhados com múltiplas variáveis e/ou condições,
    // usando 'continue' e 'break'.
    
    int i, j;
    int max_vertical = 2;
    int max_horizontal = 1;
    
    // Loop externo (for) para o movimento vertical (Cima)
    for (i = 0; i < max_vertical; i++) {
        if (i == 1) {
            // Exemplo de uso do 'continue' para demonstrar controle de fluxo
            printf("Cima\n");
            continue; 
        }
        printf("Cima\n");
    }
    
    // Loop interno (while) para o movimento horizontal (Direita)
    j = 0;
    while (j < max_horizontal) {
        printf("Direita\n");
        j++;
        if (j == max_horizontal) {
            // Exemplo de uso do 'break' para encerrar o loop horizontal
            break;
        }
    }
    printf("\n");
}

// NÍVEL MESTRE: Movimento do Bispo com Loops Aninhados

void movimento_bispo_loops_aninhados() {
    printf("--- NÍVEL MESTRE: Movimento do BISPO (Loops Aninhados) ---\n");
    printf("Movimento: %d casas na Diagonal (Cima e Direita) (Loops Aninhados)\n", CASAS_BISPO);
    
    // Requisito: Loop mais externo para o movimento vertical, e o mais interno para o horizontal.
    
    int i;
    int j;
    
    // Loop externo (for) para o movimento vertical (Cima)
    for (i = 0; i < CASAS_BISPO; i++) {
        // Loop interno (do-while) para o movimento horizontal (Direita)
        // O loop interno executa apenas uma vez por iteração do loop externo
        // para simular o movimento diagonal (1 casa vertical + 1 casa horizontal).
        j = 0;
        do {
            printf("Cima Direita\n");
            j++;
        } while (j < 1); // Executa apenas uma vez
    }
    printf("\n");
}

// NÍVEL INTERMEDIÁRIO: Movimento do Cavalo com Loops Aninhados (Mantido para referência)

void movimento_cavalo_intermediario() {
    printf("--- NÍVEL INTERMEDIÁRIO: Movimento do CAVALO (Loops Aninhados) ---\n");
    printf("Movimento: %d casas para Baixo e %d casa para a Esquerda\n", CASAS_CAVALO_VERTICAL, CASAS_CAVALO_HORIZONTAL);
    
    // Requisito: Usar pelo menos dois loops aninhados, sendo um 'for' e outro 'while' ou 'do-while'.
    
    // Loop 'for' para o movimento vertical (Baixo)
    for (int i = 0; i < CASAS_CAVALO_VERTICAL; i++) {
        printf("Baixo\n");
    }
    
    // Loop 'while' para o movimento horizontal (Esquerda)
    int j = 0;
    while (j < CASAS_CAVALO_HORIZONTAL) {
        printf("Esquerda\n");
        j++;
    }
    printf("\n");
}

// FUNÇÃO PRINCIPAL

int main() {
    // NÍVEL MESTRE: Chamada dos Movimentos Recursivos
    printf("--- NÍVEL MESTRE: Movimento da TORRE (Recursivo) ---\n");
    printf("Movimento: %d casas para a Direita\n", CASAS_TORRE);
    movimento_torre_recursivo(CASAS_TORRE);
    printf("\n");

    printf("--- NÍVEL MESTRE: Movimento do BISPO (Recursivo) ---\n");
    printf("Movimento: %d casas na Diagonal (Cima e Direita)\n", CASAS_BISPO);
    movimento_bispo_recursivo(CASAS_BISPO);
    printf("\n");

    printf("--- NÍVEL MESTRE: Movimento da RAINHA (Recursivo) ---\n");
    printf("Movimento: %d casas para a Esquerda\n", CASAS_RAINHA);
    movimento_rainha_recursivo(CASAS_RAINHA);
    printf("\n");
    
    // Chamada dos Movimentos com Loops Complexos
    
    movimento_cavalo_mestre();
    movimento_bispo_loops_aninhados();
    
    return 0;
}
