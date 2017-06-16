#include <stdio.h>

static int separate(int v[], int p, int r) {
    int c = v[p], i = p + 1, j = r, t;
    while (i <= j) {
        if (v[i] <= c) ++i;
        else if (c < v[j]) --j;
        else {
            t = v[i], v[i] = v[j], v[j] = t;
            ++i; --j;
        }
    }
    v[p] = v[j], v[j] = c;
    return j;
}

void quicksort(int v[], int p, int r) {
    int j;
    if (p < r) {
        j = separate(v, p, r);
        quicksort(v, p, j-1);
        quicksort(v, j+1, r);
    }
}

int main() {
    int numbers[3], LENGTH_ARRAY = 3;

    for (int i = 0; i < LENGTH_ARRAY; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    quicksort(numbers, 0, LENGTH_ARRAY - 1);

    for (int j = LENGTH_ARRAY - 1; j >= 0; j--)
        printf("%d \n", numbers[j]);

    return 0;
}
