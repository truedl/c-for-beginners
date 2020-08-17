//A bank established in 1970 is having trouble telling old and new customers when their loan is/was due. Suppose all loans are due in 100 days.
//Write a program that takes in an input date (xx/xx/xxxx) and outputs the date 100 days later.

#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* time_t, struct tm, time, mktime */

int main(){
	
	int day;
	int month;
	int year;
	int loanDueInterval = 100;// Every loan is due in 100 days.
	printf("Enter a date when the loan was taken out in XX/XX/XXXX format\n");	
	
	while(scanf("%d/%d/%d",&month,&day,&year) == 1){
		printf("Incorrect input\n");
	}
	
	if(month>12 || year<1970){//Bank established after 1970, and month>12 DNE.
		printf("incorrect input! Month or Year incorrect!\n");
		return 1;
	}
	
	/*The time.h structure we will be using to do this."*/
	struct tm loanDate = { .tm_year=year-1900, .tm_mon=month-1, .tm_mday=day };
	
	if(asctime(&loanDate) == NULL){//If we are given nonsense for an input
		printf("incorrect input!\n");
		return 1;
	}
	
	printf("%sis when the loan was issued\n",asctime(&loanDate));
	
	loanDate.tm_mday+=loanDueInterval; /* adding interval of 100 days  */
	
	mktime(&loanDate);
	
	printf("%sis when the loan is due",asctime(&loanDate));
	
	return 0;
	
}


