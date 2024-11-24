#include<stdio.h>
int main() {
    int n, min;
    char choice;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    min = n; 

    printf("Do you want to continue (y/n): ");
    scanf(" %c", &choice); 

    loop:
    if (choice == 'y') {
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < min) {
    min = n; 
    }
    printf("Do you want to continue (y/n): ");
    scanf(" %c", &choice); 
    if (choice == 'y') {
    goto loop; 
    }
    }
    if (choice == 'n') {
    printf("Minimum number from your input is: %d\n", min); 
    }
    return 0;
}

