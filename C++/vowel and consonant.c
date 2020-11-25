#include<stdio.h>
main()
{
	char letter;
	printf("Enter the letter...");
	scanf("%c",&letter);
	switch(letter)
	{
	case 'A': 
	case 'a':
			printf("the letter is vowel");
			break;
	case 'E':
	case 'e':
			printf("the letter is vowel");
			break;
	case 'I': 
	case 'i':
			printf("the letter is vowel");
			break;
	case 'O': 
	case 'o':
			printf("the letter is vowel");
			break;
	case 'U': 
	case 'u':
			printf("the letter is vowel");
			break;
	default:
			printf("the letter is consonant");
			break;
	}
	
}
