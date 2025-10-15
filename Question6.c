#include <stdio.h>

int main() {
    int itemCodes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(itemCodes) / sizeof(itemCodes[0]);

    int defectiveCode;
    printf("Enter defective item code: ");
    scanf("%d", &defectiveCode);

    for (int i = 0; i < size; i++) {
        if (itemCodes[i] == defectiveCode) {
            itemCodes[i] = -1;
        }
    }

    printf("Item codes after removing defective codes: ");
    for (int i = 0; i < size; i++) {
        if (itemCodes[i] != -1) {
            printf("%d\n", itemCodes[i]);
        }
    }

    return 0;
}
