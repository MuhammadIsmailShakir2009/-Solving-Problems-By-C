#include<stdio.h>
int main() 
{
    int PA,Dur,IR;
    float InterestAmount,TotalAmount;
    printf("Principal Amount: ");
    scanf("%d", &PA);
    printf("Duration in years: ");
    scanf("%d", &Dur);
    printf("Interest Rate(percentage): ");
    scanf("%d", &IR);
    InterestAmount=(PA*Dur*IR)/100;
    TotalAmount=PA+InterestAmount;
    printf("Interest Amount=%f\n",InterestAmount);
    printf("Total Amount Payable = %f\n", TotalAmount);
    return 0;
}

