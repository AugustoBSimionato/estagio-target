#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    int start = 0;
    int end = n - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    printf("Digite algo para ser invertido: ");
    scanf("%[^\n]", str);

    printf("Original: %s\n", str);

    reverseString(str);

    printf("Invertido: %s\n", str);

    return 0;
}