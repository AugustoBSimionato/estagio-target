#include <stdio.h>

int main() {
    char* estados[] = {"SP", "RJ", "MG", "ES", "Outros"};
    double faturamentos[] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    
    double total = 0;
    for (int i = 0; i < 5; i++) {
        total += faturamentos[i];
    }
    
    printf("Percentual de representacao de cada estado:\n\n");
    for (int i = 0; i < 5; i++) {
        double percentual = (faturamentos[i] / total) * 100;
        printf("%s: %.2f%%\n", estados[i], percentual);
    }
    
    return 0;
}