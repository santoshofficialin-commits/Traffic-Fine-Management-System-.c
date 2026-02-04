#include <stdio.h>

int main() {
    int speed, limit, fine = 0;
    char vehicle, helmet, seatbelt, license;

    printf("Enter vehicle type (B = Bike, C = Car, T = Truck): ");
    scanf(" %c", &vehicle);

    printf("Enter speed limit: ");
    scanf("%d", &limit);

    printf("Enter vehicle speed: ");
    scanf("%d", &speed);

    if (speed > limit) {
        int diff = speed - limit;

        if (diff <= 20)
            fine += 500;
        else if (diff <= 40)
            fine += 1000;
        else
            fine += 2000;
    }

    if (vehicle == 'B') {
        printf("Helmet worn? (Y/N): ");
        scanf(" %c", &helmet);
        if (helmet == 'N')
            fine += 500;
    }

    if (vehicle == 'C') {
        printf("Seatbelt worn? (Y/N): ");
        scanf(" %c", &seatbelt);
        if (seatbelt == 'N')
            fine += 300;
    }

    printf("Valid license? (Y/N): ");
    scanf(" %c", &license);
    if (license == 'N')
        fine += 1000;

    if (fine == 0)
        printf("\nNo fine. Drive safely! 🚦\n");
    else
        printf("\nTotal Traffic Fine: ₹%d\n", fine);

    return 0;
}
