#include "busreservation.h"
#include "main.c"
#include "login.c"
#include "bookticket.c"
#include "cancelticket.c"
#include "checkbusstatus.c"

int main() {
    printf("welcome to the bus reservation System\n");
    login();

    while (1) {
        int choice;
        printf("menu:\n");
        printf("1. book a ticket\n");
        printf("2. Cancel a ticket\n");
        printf("3. Check bus status\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookticket();
                break;
            case 2:
                cancelticket();
                break;
            case 3:
                checkbusstatus();
                break;
            case 4:
                printf("Exiting\n");
                return 0;
            default:
                printf("invalid choice Please try again\n");
        }
    }

    return 0;
}

