#include <stdio.h>

int main() {
    int multiple = 7;

    do {
      printf("%d\n", multiple);
      multiple += 7;
    } while(multiple < 200);

    return 0;
}
