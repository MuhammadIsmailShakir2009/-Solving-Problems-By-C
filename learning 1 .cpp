/// factorial
#include <stdio.h>
int main()
{
int f=1,n,i;
printf("Input the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("The factorial of %d is: %d",n,f);
return 0;
}
///Write a C program to read any day number in integer and display the day name in word format.
#include <stdio.h>
int main()
{
int n;
printf("Input the day number: ");
scanf("%d",&n);
if(n==1)
printf("Monday");
if(n==2)
printf("Tuesday");
else if(n==2)
printf("Tuesday");
else if(n==3)
printf("Wednesday");
else if(n==4)
printf("Thursday");
else if(n==5)
printf("Friday");
else if(n==6)
printf("Saturday");
else if(n==7)
printf("Sunday");
else
printf("Invalid Input");

return 0;
}
///find sp or cp
#include <stdio.h>
int main()
{
float sp,cp,r;
printf("Input cost price: ");
scanf("%f",&cp);
printf("Input selling price: ");
scanf("%f",&sp);
if(sp<cp)
{
r=cp-sp;
printf("loss = %f",r);
}
else
{
r=sp-cp;
printf("profit = %f",r);
}
return 0;
}

///Write a C program to check whether an alphabet is a vowel or a consonant.
#include <stdio.h>
int main()
{
char a;
printf("Input character: ");
scanf("%c",&a);
if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o
'||a=='u')

printf("vowel");
else
printf("consonant");

return 0;
}

//Write a C program for reading any Month Number and displaying the Month name as a word.
#include <stdio.h>
int main()
{
int n;
printf("Input the month #: ");
scanf("%d",&n);
switch(n)
{
case 1:
printf("January");
break;
case 2:
printf("February");
break;
case 3:
printf("March");
break;
case 4:
printf("April");
break;
case 5:
printf("May");
break;
case 6:
printf("June");
break;
case 7:
printf("July");
break;
case 8:
printf("August");
break;
case 9:
printf("September");
break;
case 10:
printf("October");
break;
case 11:
printf("November");
break;
case 12:
printf("December");
break;
default:
printf(“invalid input”);
}
return 0;
}
///
///Write a C program to check whether a character is an alphabet, digit or special character.
#include <stdio.h>
int main()
{
char a;
printf("Input character: ");
scanf("%c",&a);
if(a>='A' && a<='Z')
printf("alphabet");
else if(a>='a' && a<='z')
printf("alphabet");
else if(a>'Z' && a<'a')
printf("special character");
else if(a>='0' && a<='9')
printf("digit");

return 0;
}
///Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
#include <stdio.h>
int main()
{
float t;
printf("Input Temperature: ");
scanf("%f",&t);
if(t<0)
printf("Freezing weather");
else if(t>=0 && t<10)
printf("Very Cold weather");
else if(t>=10 && t<20)
printf("Cold weather");
else if(t>=20 && t<30)
printf("Normal weather");
else if(t>=30 && t<40)
printf("Hot weather");
else
printf("Very Hot weather");

return 0;
}
