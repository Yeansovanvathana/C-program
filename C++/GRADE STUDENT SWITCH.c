#include<stdio.h>
int main()
{
	int mark;
	printf("\nThis is a grade checker program");
	printf("\nEnter the marks between 0 to 100");
	
	printf("\nEnter the mark: ");
	scanf("%d",&mark);
	
	switch(mark/10)
	{
		case 10 :
		case 9 :
			printf("\n====================");
			printf("\nYour Grade is: OUTSTANDING");
			break;
		case 8 :
			printf("\nYour Grade is: EXCELLENT");
			break;
		case 7 :
			printf("\nYour Grade is: VERY GOOD");
			break;
		case 6 :
			printf("\nYour Grade is GOOD");
			break;
		case 5 :
			printf("\nYour Grade is: AVERAGE");
			break;
		default :
			printf("\nYour Grade is FAIL");
	}
}
