#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void user(char name[])
{
    printf("=============================================\n");
    printf(" Welcome to Our Online Ordering System!\n");
    printf("=============================================\n");
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';
}

void ordering() 
{
    int bill = 0;
    int price_array[11] = {260, 270, 280, 225, 270, 220, 100, 240, 250, 270};
    char *m[11] = {
        "Hummus & Bell Pepper Wrap (VEG)", 
        "Devilled Egg & Sandwiched Wrap (NON-VEG)", 
        "Peri-Peri Chicken Wrap (NON-VEG)", 
        "Estelle Sandwich (VEG)", 
        "Olive & Feta Cheese Wrap (VEG)",
        "Salted Caramel Cream Cup (VEG)", 
        "Gadbad Ice Cream (VEG)",
        "Salted Fries (VEG)", 
        "Cajun Spiced Fries (VEG)", 
        "Hummus with Olives and Toasted Bread (VEG)"
    };

    int id = 1;
    int userorders[11] = {0};

    while (id) {
        printf("\nEnter your Order ID (1-10) or 0 to Exit: ");
        scanf("%d", &id);
        int h;
        if (id >= 1 && id <= 10) {
            printf(">> %s chosen\n", m[id - 1]);
            printf("Enter quantity for %s: ", m[id - 1]);
            scanf("%d", &h);
            userorders[id - 1] = h;
        } 
        else if (id != 0) {
            printf("!! Invalid Order ID! Please try again.\n");
        } 
        else {
            printf("Exiting order selection...\n");
        }
    }

    printf("\n=============== Order Summary ===============\n");
    for (int i = 0; i < 10; i++) {
        if (userorders[i] > 0) {
            printf("ID: %2d | %-45s Qty: %2d\n", i + 1, m[i], userorders[i]);
        }
    }

    printf("=============================================\n");
    printf("Confirm your Order: Press 1 for YES / 0 to EDIT: ");
    int confirm;
    scanf("%d", &confirm);

    if (confirm != 1) {
        int orderchange = 1;
        while (orderchange == 1) {
            printf("\nYour Current Orders:\n");
            for (int i = 0; i < 10; i++) {
                if (userorders[i] > 0) {
                    printf("ID: %2d | %-45s Qty: %2d\n", i + 1, m[i], userorders[i]);
                }
            }

            int a, b;
            printf("Enter the Order ID to change (1-10): ");
            scanf("%d", &a);
            if (a < 1 || a > 10) {
                printf("!! Invalid ID.\n");
            } else {
                printf("Your Item: %s | Quantity: %d | Total Price: Rs %d\n", 
                       m[a - 1], userorders[a - 1], price_array[a - 1] * userorders[a - 1]);
                printf("Enter new quantity: ");
                scanf("%d", &b);
                userorders[a - 1] = b;
                printf(">> Order Updated!\n");
            }

            printf("Edit another order? (1 = Yes / 0 = No): ");
            scanf("%d", &orderchange);  
        }
    }

    printf("\n************** Final Bill **************\n");

    for (int i = 0; i < 10; i++) 
    {
        int q;
        if (userorders[i] > 0) 
        {
            if(userorders[i] <= 2)
            {
                q = ((price_array[i] * userorders[i]) + 10);
                bill = bill + q;
                printf("Item:%s / Number of Items:%d  / Amount:Rs.%d\n", m[i], userorders[i], q);
            }
            else if(userorders[i] > 2)
            {
                q = ((price_array[i] * userorders[i]) + 25);
                bill = bill + q;
                printf("Item:%s / Number of Items:%d  / Amount:Rs.%d\n", m[i], userorders[i], q);
            }
            else
            {
                q = ((price_array[i] * userorders[i]) + 50);
                bill = bill + q;
                printf("Item:%s / Number of Items:%d  / Amount:Rs.%d\n", m[i], userorders[i], q);
            }
        }
    }

    printf("----------------------------------------\n");
    printf("Dear Customer your final bill is: Rs %d\n", bill);
    printf("Thank You For Ordering & Do Order Again!\n");
    printf("****************************************\n");
}
