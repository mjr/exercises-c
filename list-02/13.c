#include <stdio.h>

int main() {
    const int SIZE_MAX_ARRAY = 12;
    int numbers = 50, dividers, result, countPrimes = 1, primes[SIZE_MAX_ARRAY];

    for (int j = 1; j <= numbers; j++) {
        dividers = 0;
        for (int i = 1; i <= j; i++) {
            if (j % i == 0)
                dividers++;
        }

        if (dividers == 2) {
            primes[countPrimes] = j;
            countPrimes++;
        }
    }

    result = primes[12] - primes[6];
    printf("%d\n", result);

    return 0;
}
