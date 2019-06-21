// Write a basic calculator that can to do addition, subtraction, multiplication and division with two numbers.

#include <stdio.h>

int main(){
    float first_num, second_num;
    char c;

    printf("Do you want to do addition(A), subtraction(S), multiplication(M) or division(D)? ");
    scanf("%c", &c);

    printf("Enter first number: ");
    scanf("%f", &first_num);

    printf("Enter second number: ");
    scanf("%f", &second_num);

    switch(c){
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
            printf("The operation \"%c\" isn't exists.", c);
            break;
    }

    return 0;
}