//Your 7 year old niece always finds it troublesome to get century for year provided.Especially, when asked about 100th year of each century.

//For example, given 1800, she wouldn't be sure whether it's 18th century or 19th.

//Write a C program for your niece to always get correct century for any year provided.
#include <stdio.h>

void century_from_year(int inputYear)
{
    int hundredYearCentury = inputYear / 100;
    int nonHundredYearCentury = hundredYearCentury + 1;

    if (inputYear <= 0)//case input is equal or under 0
    {
        printf("Year cannot be 0 or negative!");
    }
    else if (inputYear <= 100)//case input is between 1 and 100 
    {
        printf("CENTURY = 1");
    }
    else if (inputYear % 100 == 0)//case input%100 is 0 (100 X ?? = input)
    {
        printf("CENTURY = %d", hundredYearCentury);
    }
    else// handle other case
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