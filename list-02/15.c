#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i <= 20; i++) {
         int number = 1000 + (rand() % 1000);
         if (number % 11 == 5)
            printf("%d\n", number);
    }

    return 0;
}
