#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: input is not a valid integer.\n");
        return 1;
    }

    if (n < 2) {
        printf("Error: n must be greater than or equal to 2.\n");
        return 1;
    }

    printf("is_prime(%d) = %d\n", n, is_prime(n));

  
    printf("Primes up to %d:\n", n);
    for (int k = 2; k <= n; ++k) {
        if (is_prime(k)) {
            printf("%d ", k);
        }
    }
    printf("\n");

    return 0;
}

