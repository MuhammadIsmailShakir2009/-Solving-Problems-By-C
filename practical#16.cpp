#include <stdio.h>
int main()
{
int a,b,c; printf("Enter first value: ");
scanf("%d",&a);
printf("Enter second value: ");
scanf("%d",&b);
printf("Enter third value: ");
scanf("%d",&c);
if(a>b && a>c)
printf("%d is greatest",a);
else if(a>b && a>c)
printf("%d is greatest",b);
else
printf("%d is greatest",c);
return 0;

}
