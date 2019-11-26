//당신의 7살인 조카 딸은 특히 100년단위로 물어봤을때, 항상 몇 세기인지 알지 못하는 문제가 있다.

//예를들어, 1800년이라고 하면 그녀는 18세기인지 19세기인지 확신하지 못한다.

//당신의 조카 딸을 위해, 주어진 년도의 세기를 정확히 알아내주는 C 프로그램을 작성하시오.
#include <stdio.h>

void century_from_year(int inputYear)
{
    int hundredYearCentury = inputYear / 100;
    int nonHundredYearCentury = hundredYearCentury + 1;

    if (inputYear <= 0) //입력값이 0과 같거나 작을경우
    {
        printf("Year cannot be 0 or negative!");
    }
    else if (inputYear <= 100) //입력값이 1~100일경우
    {
        printf("세기 = 1");
    }
    else if (inputYear % 100 == 0) //입력값이 100으로 나누어 떨어질경우
    {
        printf("세기 = %d", hundredYearCentury);
    }
    else //그외의 경우 처리
    {
        printf("세기 = %d", nonHundredYearCentury);
    }
}

int main()
{
    int inputYear;
    printf("\n 년도: ");
    scanf("%d", &inputYear);

    century_from_year(inputYear);

    return 0;
}