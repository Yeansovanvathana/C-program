#include<stdio.h>
#include<conio.h>
int main()
{
	
	//finding Maximum....
	int X,Y,Max;
	printf("finding Maximum of Two Number: \n");
	printf("--------------------------- \n");
	printf("please input X= ");
	scanf("%d",&X);
	printf("please input Y= ");
	scanf("%d",&Y);
	Max=X;
	if(X<Y)
	{
		Max=Y;
	}
	printf("x=%d\ty=%d\tmax=%d\n",X,Y,Max);
	printf(">>>>press key to exit");
	getch();
	return 0;

}

	
