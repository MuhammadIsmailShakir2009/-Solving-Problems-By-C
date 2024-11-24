#include<stdio.h>

int main() {
    int Connum, Metnum, Pr, Cr, Units;
    float Bill, Rate;
    char cname[30];
    
    printf("Consumer name: ");
    fgets(cname, sizeof(cname), stdin); 
    printf("Consumer number: ");
    scanf("%d", &Connum);
    printf("Meter number: ");
    scanf("%d", &Metnum);
    printf("Previous reading: ");
    scanf("%d", &Pr);
    printf("Current reading: ");
    scanf("%d", &Cr);
    printf("Rate: ");
    scanf("%f", &Rate);
    Units = Cr - Pr;
    Bill = Rate * Units;
    
    printf("Consumer Number: %d\nConsumer name: %sMeter number: %d\nPrevious Reading:    %d\nCurrent reading: %d\nRate: %f\nUnits = %d\nBill = %f\n",
	      Connum, cname, Metnum, Pr, Cr, Rate, Units, Bill);
    
    return 0;
}


