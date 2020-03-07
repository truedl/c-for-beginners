// Write a basic calculator that can do addition, subtraction, multiplication and division with two numbers.

#include <stdio.h>

int main(){
    float first_num, second_num;
    char c;

    printf("Do you want to use addition(A), subtraction(S), multiplication(M) or division(D)? ");
    scanf("%c", &c); //enter Character variable to operate

    printf("Enter first number: ");
    scanf("%f", &first_num); //enter first number

    printf("Enter second number: ");
    scanf("%f", &second_num); //enter second number

    switch(c){ //Switch-Case statement to return different result according to the chosen operation
        case 'A':
            printf("%f", first_num + second_num);
            break;
        
        case 'S':
            printf("%f", first_num - second_num);
            break;
        
        case 'M':
            printf("%f", first_num * second_num);
            break;
        
        case 'D':
            printf("%f", first_num / second_num);
            break;
        
        default:
            printf("The operation \"%c\" doesn't exists.", c);
            break;
    }

    return 0;
}
