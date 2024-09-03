#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, soma = 1;
    
    if (num == 0 || num == 1) {
        return 1;
    }
    
    printf("\nSequencia: ");
    
    while (soma < num) {
        soma = a + b;
        a = b;
        b = soma;
        
        printf("%d", soma);
    }
    
    return (soma == num);
}

int main() {
    int num;
    
    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &num);
    
    if (pertenceFibonacci(num)) {
        printf("\nO numero inserido (%d) pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("\nO numero inserido (%d) nao pertence a sequencia de Fibonacci.\n", num);
    }
    
    return 0;
}