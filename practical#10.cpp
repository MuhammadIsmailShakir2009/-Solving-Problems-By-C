#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter the value of n1:");
	scanf("%d",&n1);
	printf("enter the value of n2:");
	scanf("%d",&n2);
	if(n1<n2)
		printf("error n1 should be greater than n2");
	loop:
		if(n2%2==0)
			printf("%d\t",n2);
		n2++;
		if(n2<=n1)
			goto loop;
		return 0;
}

