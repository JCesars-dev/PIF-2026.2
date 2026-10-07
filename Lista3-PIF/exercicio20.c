#include <stdio.h>

int main() {

    int i;

    for (i = 32; i <= 126; i++) {
        printf("Decimal: %d\tHexadecimal: %X\tCaractere: %c\n", i, i, i);
    }

    return 0;
}