#include <stdio.h>

int main() {
    int average, sum = 0, count = 0;

    for (int i = 13; i <= 73; i++) {
        if (i % 2 == 0) {
            sum += i;
            count++;
        }
    }
    average = sum / count;
    printf("%d\n", average);

    return 0;
}
