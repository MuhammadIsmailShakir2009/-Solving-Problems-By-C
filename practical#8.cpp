#include <stdio.h>
int main() 
{
    int A, B, C, D, E,Product,Sum,Avg; 
    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    Sum = A + B + C + D + E;
    Product = A*B*C*D*E;
    Avg = Sum / 5;
    printf("Sum= %d\n", Sum);
    printf("Product= %d\n", Product);
    printf("Avg= %d\n", Avg);
    return 0;
}

