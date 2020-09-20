#include <stdio.h>

int reverseNumber(int num)
{
    int reverse = 0;
    while(num!=0)
    {
        reverse = reverse * 10;
	reverse = reverse + (num%10);
	num = num/10;
    }
    return reverse;
}

int main()
{
    int num;
    printf("Enter a number to reverse:\n");
    scanf("%d",&num);
    int reverse = reverseNumber(num);
    printf("Reverse of %d is %d.\n",num,reverse);
    return 0;
}
