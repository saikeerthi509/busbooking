#include "cancelticket.c"

void cancelticket() {
    if (bookedSeats > 0) {
        int seattocancel;
        printf("Enter seat number to cancel: ");
        scanf("%d", &seattocancel);
        if (seattocancel > 0 && seattocancel <= totalSeats) {
            if (passengers[seattocancel - 1].seatnumber != 0) {
                passengers[seattocancel - 1].seatnumber = 0; 
                bookedSeats--;
                printf("ticket for seat %d canceled successfully!\n", seattocancel);
            } else {
                printf("Seat %d is not booked\n", seattocancel);
            }
        } else {
            printf("invalid seat number\n");
        }
    } else {
        printf("no tickets booked yet\n");
    }
}
