#include <stdio.h>
#include <stdlib.h>

int main()
{
   int computerAmount, peripherals;
    char jawab;
    bool serviceTimeBusiness, dropOffPickUp;
    float baseFee = 0, additionalFee = 0, totalFee;

    printf("Masukkan jumlah komputer: ");
    scanf("%d", &computerAmount);

    printf("Masukkan jumlah peripheral: ");
    scanf("%d", &peripherals);

    printf("Apakah service dilakukan pada jam kerja? (Y/T): ");
    scanf(" %c", &jawab);
    serviceTimeBusiness = (jawab == 'y' || jawab == 'Y');

    printf("Apakah pelanggan bersedia drop off & pick up? (Y/T): ");
    scanf(" %c", &jawab);
    dropOffPickUp = (jawab == 'y' || jawab == 'Y');
    if (computerAmount == 1 || computerAmount == 2) {
        baseFee = 50;
        additionalFee = 0;
    } else if (computerAmount >= 3 && computerAmount <= 10) {
        baseFee = 100;
        additionalFee = peripherals * 10;
    } else if (computerAmount > 10) {
        baseFee = 500;
        additionalFee = peripherals * 10;
    }
    if (!serviceTimeBusiness) {
        baseFee *= 2;
    }
    if (dropOffPickUp) {
        baseFee /= 2;
    }
    totalFee = baseFee + additionalFee;
    printf("Total biaya service: $%.2f\n", totalFee);
}
