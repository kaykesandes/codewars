#include <stdio.h>
#include <stdlib.h>

int is_prime(unsigned long long n) {
    // Implementação da função is_prime
    // ...

    return 1; // Supondo que você já implementou a função corretamente
}

int prime_factors(unsigned long long n, unsigned long long** factors, unsigned long long* factorCount) {
    unsigned long long count = 2;

    while (count <= n) {
        if (n % count == 0 && is_prime(count)) {
            n = n / count;
            (*factorCount)++; // Incrementa o contador de fatores

            // Realoca o array de fatores para acomodar o novo fator
            *factors = (unsigned long long*)realloc(*factors, (*factorCount) * sizeof(unsigned long long));
            (*factors)[(*factorCount) - 1] = count; // Adiciona o fator ao array

            printf("count: %llu\n", count);
            count = 2;
            continue;
        }
        count++;
    }
}

int main() {
    unsigned long long* factors = NULL; // Ponteiro para o array de fatores
    unsigned long long factorCount = 0; // Contador de fatores

    prime_factors(220, &factors, &factorCount);

    // Exibir os fatores encontrados
    printf("Fatores: ");
    for (unsigned long long i = 0; i < factorCount; i++) {
        printf("%llu ", factors[i]);
    }
    printf("\n");

    free(factors); // Libera a memória alocada

    return 0;
}
