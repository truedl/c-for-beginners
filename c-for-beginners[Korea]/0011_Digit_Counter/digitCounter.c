#include <stdio.h>

int main()
{
	int num = 0, digit = 0, counter = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	getchar();
	printf("Enter a digit (0-9): ");
	digit = (int)(getchar() - '0');
	
	while(num > 0)
	{
		if(num % 10 == digit)
		{
			counter++;
		}
		num /= 10;
	}
	
	printf("%d appears %d times in the number", digit, counter);
	
	return 0;
}