#include<stdio.h>
int main()
{
int n1, n2,m, c=0;
printf("Enter the number you want multiple of: ");

scanf("%d", &m);

printf("Starting range: ");

scanf("%d", &n1);

printf("Ending Range: ");

scanf("%d", &n2);

loop:
if(n1%m ==0)
c++;
n1++;
if(n1 <= n2)
goto loop;

printf("Count = %d" , c);
return 0;

}

