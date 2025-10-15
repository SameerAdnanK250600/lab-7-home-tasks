#include <stdio.h>

int main() {
    int employeeIds[10];
    int adjustedEmployeesIds[10];
    int j = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter employee ID %d: ", i + 1);
        scanf("%d", &employeeIds[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (employeeIds[i] % 2 == 0) {
            adjustedEmployeesIds[j++] = employeeIds[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (employeeIds[i] % 2 != 0) {
            adjustedEmployeesIds[j++] = employeeIds[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", adjustedEmployeesIds[i]);
    }

    return 0;
}
