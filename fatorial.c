#include <stdio.h>

//  fatorial com entrada do usuário
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // caso base
    } else {
        return n * fatorial(n - 1); // chamada recursiva
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido. Digite apenas um número inteiro positivo.\n");
    } else {
        printf("Fatorial de %d = %d\n", numero, fatorial(numero));
    }

    return 0;
}
