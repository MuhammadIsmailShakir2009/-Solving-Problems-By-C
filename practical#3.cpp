#include<stdio.h>
#include<math.h>
int main()
{
    float ans,b,e;
    printf("Enter Base: ");
    scanf("%f",&b);
    printf("Enter Exponent: ");
    scanf("%f",&e);
    ans= pow(b,e);
    printf("%f^%f=%f",b,e,ans);
    return 0;
}

