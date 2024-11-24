#include<stdio.h>
int main()
{
	int n1,n2,i,p;
	printf("Enter First Value:");
	scanf("%d",&n1);
	printf("Enter Second Value:");
	scanf("%d",&n2);
	loop1:
    i=2;
    p=1;
	loop2:
	if(n1%i==0)
	{
	p=0;
	}
	i++;
	if(i<n1)
	goto loop2;
	if(p==1)
	printf("%d\n",n1);
	n1=n1-1;
	if(n1>=n2)
	goto loop1;
}

