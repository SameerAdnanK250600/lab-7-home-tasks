#include <stdio.h>

int main() {
    int booked[10] = {0, 0, 0, 1, 1, 0, 1, 0, 1, 1};
    int seatNumber;
    int successfullBookings = 0;
    do {
        printf("Enter seat number to book: ");
        scanf("%d", &seatNumber);

        if (booked[seatNumber] == 0) {
            booked[seatNumber] = 1;
            printf("Seat number %d has been booked.\n", seatNumber);
            successfullBookings++;
        } else {
            printf("Seat number %d can not be booked.\n", seatNumber);
        }
    } while (successfullBookings != 5);

    return 0;
}
