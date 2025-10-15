#include <stdio.h>

int main() {
    int sectionARollNos[] = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59};
    int sectionBRollNos[] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

    int size = sizeof(sectionARollNos) / sizeof(sectionARollNos[0]);

    int combinedSectionsRollNos[size*2];

    int j = 0;
    for (int i = 0; i < size; i++) {
        combinedSectionsRollNos[j++] = sectionARollNos[i];
    }
    for (int i = 0; i < size; i++) {
        combinedSectionsRollNos[j++] = sectionBRollNos[i];
    }

    printf("Combined sections: \n");
    for (int i = 0; i < size*2; i++) {
        printf("%d ", combinedSectionsRollNos[i]);
    }
    return 0;
}
