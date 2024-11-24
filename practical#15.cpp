#include<stdio.h>
int main(){
	int prime=1,n,i=2;
	printf("Enter a Number");
	scanf("%d",&n);
	loop:
		if(i<=n/2){
			if(n%i==0)
			prime=0;
			i++;
			goto loop;
		}
		if(prime==1){
			printf("prime");
		}
		else{
			printf("not prime");
		}
		return 0;
}
