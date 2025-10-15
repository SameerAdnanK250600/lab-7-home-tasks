#include <stdio.h>

int main() {
    int budget = 0;
    int itemPrices[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(itemPrices) / sizeof(itemPrices[0]);

    printf("Enter Budget:\n");
    scanf("%d", &budget);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                continue;
            }
            if (itemPrices[i] + itemPrices[j] == budget) {
                printf("You can buy item %d and item %d with your budget.\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}
