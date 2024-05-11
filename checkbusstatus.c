#include "checkbusstatus"
void checkbusstatus() {
    printf("Total seats: %d\n", totalSeats);
    printf("Booked seats: %d\n", bookedSeats);
    printf("Available seats: %d\n", totalSeats - bookedSeats);
    printf("Passenger list:\n");
    for (int i = 0; i < totalSeats; i++) {
        if (passengers[i].seatnumber != 0) {
            printf("Seat %d: %s\n", passengers[i].seatnumber, passengers[i].name);
        }
    }
}
