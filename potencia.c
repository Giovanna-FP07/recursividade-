#include <stdio.h>

// potência (x elevado a y)
int potencia(int base, int expoente) {
   if (expoente == 0) return 1; // caso base
   return base * potencia(base, expoente - 1); // chamada recursiva
}

int main() {
   int base, expoente;

   printf("Digite a base: ");
   scanf("%d", &base);

   printf("Digite o expoente (inteiro não-negativo): ");
   scanf("%d", &expoente);

   if (expoente < 0) {
       printf("Expoente inválido. Digite apenas inteiros não-negativos.\n");
   } else {
       printf("%d elevado a %d = %d\n", base, expoente, potencia(base, expoente));
   }

   return 0;
}
