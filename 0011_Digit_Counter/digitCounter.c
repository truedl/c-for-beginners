//Taking an input of a natural number and a char represnting a digit (0-9), count and print the number of times that digit appears in the number. Ignore all edge cases.
#include <stdio.h>

int main()
{
	int num = 0, digit = 0, counter = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	getchar();
	printf("Enter a digit (0-9): ");
	digit = (int)(getchar() - '0'); //digit is in ASCII so We need to change this to natural number
	
	while(num > 0)
	{
		if(num % 10 == digit) //get last position number in num by % calculation and compare this with digit
		{
			counter++;
		}
		num /= 10;
	}
	
	printf("%d appears %d times in the number", digit, counter);
	
	return 0;
}