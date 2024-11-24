#include<stdio.h>
int main() 
{
    int a,b,small,gcd,i;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    i=1;
    (a<b)?({small=a;}):({small=b;});
    loop:
    ((a%i==0)&&(b%i==0))?({gcd=i;}):((gcd=gcd));
     i++;
     (i<=small)?({goto loop;}):({goto stop;});
     stop:
     printf("gcd=%d", gcd);
     return 0;
}

