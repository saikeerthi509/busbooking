#include "login.c"

void login() {
    int attempts = 0;
    while (attempts < 3) { 
        char username[max_name_length];
        char password[max_password_length];
        printf("enter your username: ");
        scanf("%s", username);
        printf("enter your password: ");
        scanf("%s", password);


        int i;
        for (i = 0; i < totalUsers; i++) {
            if (strcmp(username, usernames[i]) == 0) { 
                if (strcmp(password, passwords[i]) == 0) { 
                    printf("Login successful!\n");
                    return; 
                } else { 
                    printf("incorrect password, Please try again.\n");
                    break;
                }
            }
        }
        if (i == totalUsers) { 
            printf("Username not found, Please try again.\n");
        }
        attempts++;
    }
   
    printf("maximum login attempts reached\n");
    exit(1);
}
