#include <stdio.h>

int main() {
    int shiftAmount;

    int employeeIds[] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
    int size = sizeof(employeeIds) / sizeof(employeeIds[0]);

    int temp[size];

    printf("Enter shift amount: ");
    scanf("%d", &shiftAmount);

    for (int i = 0; i < size; i++) {
        if (i+shiftAmount < size) {
            temp[i+shiftAmount] = employeeIds[i];
        } else {
            temp[i+shiftAmount-size] = employeeIds[i];
        }
    }
    printf("\nOriginal employeeIds order: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", employeeIds[i]);
    }

    printf("\nThe shifted employee ids are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}
