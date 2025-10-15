#include <stdio.h>

int main() {
    int appearances = 1;
    int mostSold[2] = {0};
    int soldProductIds[] = { 1, 2, 3, 4, 5, 3, 6, 6, 6, 7, 1, 2, 7, 8, 9, 10, 9 };
    int size = sizeof(soldProductIds) / sizeof(soldProductIds[0]);

    for (int i = 0; i < size; i++) {
        if (soldProductIds[i] == -1) {
            continue;
        }
        for (int j = i+1; j < size; j++) {
            if (soldProductIds[i] == soldProductIds[j]) {
                soldProductIds[j] = -1;
                appearances++;
            }
        }
        if (appearances > mostSold[0]) {
            mostSold[0] = appearances;
            mostSold[1] = soldProductIds[i];
        }
        appearances = 1;
    }
    printf("Product with id %d was the most sold being sold %d times", mostSold[1], mostSold[0]);
    return 0;
}
