#include <stdio.h>
#include <stdlib.h>

int main() {
    int list[10] = {rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand()};
    int size = sizeof(list) / sizeof(list[0]);
    int numToSearch;

    printf("\nThe list is: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    printf("\nEnter a number to search: ");
    scanf("%d", &numToSearch);

    int i = 0;
    do {
        if (list[i] == numToSearch) {
            printf("\n%d found at index %d\n", numToSearch, i);
            return 0;
        }
        i++;
    } while (i < size);

    printf("\n%d not found\n", numToSearch);
    return 0;
}
