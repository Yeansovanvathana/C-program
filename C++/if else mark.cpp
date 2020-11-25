#include<stdio.h>
	main()
{
	//This semister 2........
	int mark;
	printf("Enter your mark= ");
	scanf("%d",&mark);

if (mark>85 && mark<100)
{
	printf("Grade A");
}
else if(mark>60 && mark<85)
{
	printf("Grade B");
}
else if(mark>50 && mark<60)
{
	printf("Grade C");
}
else if(mark<50)
{
	printf("invalid mark");
}
}


