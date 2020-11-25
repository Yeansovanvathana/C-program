#include<stdio.h>
int main()
{
	int a,b,c,Interest;
	printf("Enter amount=");
	scanf("%d",&a);
	printf("Enter number of year=");
	scanf("%d",&b);
	printf("Enter rate of interest=");
	scanf("%d",&c);
	Interest=(a*b*c)/100;
	printf("The interest is= %d",Interest);
	
}
