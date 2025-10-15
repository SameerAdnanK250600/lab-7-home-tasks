#include <stdio.h>

int main() {
    int rollNos[] = {1, 1, 2, 3, 3, 3, 3, 4, 5, 6, 7, 7, 7, 7, 7, 8, 9, 10};
    int rollNosSize = sizeof(rollNos) / sizeof(rollNos[0]);

    for (int i = 0; i < rollNosSize; i++) {
        if (rollNos[i] == -1) {
            continue;
        }
        for (int j = i + 1; j < rollNosSize; j++) {
            if (rollNos[i] ==  rollNos[j]) {
                rollNos[j] = -1;
            }
        }
    }

    int len = 0;
    for (int i = 0; i < rollNosSize; i++) {
        if (rollNos[i] != -1) {
            len++;
        }
    }

    int fixedRollNos[len];
    for (int i = 0, j= 0; i < rollNosSize; i++) {
        if (rollNos[i] != -1) {
            fixedRollNos[j++] = rollNos[i];
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", fixedRollNos[i]);
    }

    return 0;
}
