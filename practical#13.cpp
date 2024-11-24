#include<stdio.h>

int main() {
    int n, max;
    char choice;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    max = n; 
    printf("Do you want to continue (y/n): ");
    scanf(" %c", &choice); 
    loop:
    if (choice == 'y') {
        printf("Enter the value of n: ");
        scanf("%d", &n);
     if (n > max) {
            max = n; 
     }

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &choice); 

        if (choice == 'y') {
            goto loop; 
        }
    }
    if (choice == 'n') {
        printf("Maximum number from your input is: %d\n", max); 
    
    return 0;
}


