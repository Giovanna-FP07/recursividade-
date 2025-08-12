#include <stdio.h>

// soma recursiva dos n primeiros números
int soma(int n) {
   if (n == 0) return 0;         // caso base
   return n + soma(n - 1);       // chamada recursiva
}

int main() {
   int n;
   
   printf("Digite um número inteiro positivo: ");
   scanf("%d", &n);

   if (n < 0) {
       printf("Número inválido. Digite apenas inteiros positivos.\n");
   } else {
       printf("Soma dos %d primeiros números = %d\n", n, soma(n));
   }

   return 0;
}
