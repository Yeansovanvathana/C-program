#include<stdio.h>
	main()
{
	
	int X,Y,Z;
	//finding the biggest Number.......
	printf("please input X= ");
	scanf("%d",&X);
	printf("please input Y= ");
	scanf("%d",&Y);
	printf("please input Z= ");
	scanf("%d",&Z);
	
	if(X>Y && X>Z)
	{
		printf("the biggest Number is X");
	}
	else if(Y>X && Y>Z)
	{
		printf("the biggest Number is Y");
		
	}
	else if(Z>X && Z>Y)
	{
		printf("the biggest Number is Z");
	}
	else
	{
		printf("No one is the biggest");
	}

}

