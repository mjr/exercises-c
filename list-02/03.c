#include <stdio.h>

int main() {

    for (int dividers = 0; dividers < 100; dividers++) {
        if (dividers % 4 == 0)
            printf("%d\n", dividers);

        dividers++;
    }

    return 0;
}
