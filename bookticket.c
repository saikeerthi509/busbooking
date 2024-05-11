#include "bookticket.c"
void bookticket() {
    if (bookedSeats < totalSeats) {
        int desiredSeat;
        printf("Enter your desired seat number (1-%d): ", totalSeats);
        scanf("%d", &desiredSeat);

        if (desiredSeat < 1 || desiredSeat > totalSeats) {
            printf("Invalid seat number! Please enter a seat number between 1 and %d\n", totalSeats);
            return;
        }

        if (passengers[desiredSeat - 1].seatnumber != 0) {
            printf("Seat %d is already booked. Please choose another seat\n", desiredSeat);
            return;
        }

        printf("Enter passenger name: ");
        scanf("%s", passengers[desiredSeat - 1].name);
        passengers[desiredSeat - 1].seatnumber = desiredSeat;
        bookedSeats++;
        printf("Ticket booked successfully and your Seat number: %d\n", desiredSeat);
    } else {
        printf("Sorry, the bus is fully booked\n");
    }
}
