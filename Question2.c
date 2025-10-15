#include <stdio.h>

int main() {
    int highest = 0;
    int marks[] = {0,0,0,0,0,0,0,0,0,0};
    int size = sizeof(marks)/sizeof(int);

    for (int i = 0; i < size; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < size; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    printf("Highest mark is %d", highest);
    return 0;
}
