#include<stdio.h>
	
	main()
{
	//finding the greatest Number....
	int a,b;
	printf("Enter Number a=");
	scanf("%d",&a);
	printf("Enter Number b=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("the greatest Number is a");
	}
	else if(b>a)
	{
		printf("the greatest Number is b");
	}
	else
	{
		printf("number is equal");
	}
	return 0;
}
	

