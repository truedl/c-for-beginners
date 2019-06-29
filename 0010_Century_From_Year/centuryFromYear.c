#include <stdio.h>

void century_from_year(int inputYear)
{
    int hundredYearCentury = inputYear / 100;
    int nonHundredYearCentury = hundredYearCentury + 1;

    if (inputYear <= 0)
    {
        printf("Year cannot be 0 or negative!");
    }
    else if (inputYear <= 100)
    {
        printf("CENTURY = 1");
    }
    else if (inputYear % 100 == 0)
    {
        printf("CENTURY = %d", hundredYearCentury);
    }
    else
    {
        printf("CENTURY = %d", nonHundredYearCentury);
    }
}

int main()
{
    int inputYear;
    printf("\n YEAR: ");
    scanf("%d", &inputYear);

    century_from_year(inputYear);

    return 0;
}