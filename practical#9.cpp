#include<stdio.h>

int main() 
{
    int f,m;
    float A;
    printf("Force: ");
    scanf("%d", &f);
    printf("Mass: ");
    scanf("%d", &m);
    A=(float)f/m;
    printf("Acceleration=%f", A);
    return 0;
}

