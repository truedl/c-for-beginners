//자연수를 입력받고 결과를 나타낼 숫자를(0~9)입력 한다고 하자, 이때 해당 숫자가 몇번 나타나는지 출력하시오.
#include <stdio.h>

int main()
{
	int num = 0, digit = 0, counter = 0;
	
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	getchar();
	printf("대상 숫자를 입력하세요(0~9): ");
	digit = (int)(getchar() - '0'); //입력한 것은 아스키 코드로 받기때문에 숫자로 변환이 필요함
	
	while(num > 0)
	{
		if(num % 10 == digit)//나머지 연산을 통해 마지막 자리숫자를 뽑아내어 비교
		{
			counter++;
		}
		num /= 10;
	}
	
	printf("%d 은 해당 숫자 안에서 %d번 나옵니다.", digit, counter);
	
	return 0;
}