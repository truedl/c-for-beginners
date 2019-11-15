// 두 숫자 사이간의 덧셈,뺄셈,곱셈,나눗셈을 할수 있는 기초 계산기를 작성하시오. 

#include <stdio.h>

int main(){
    float first_num, second_num;
    char c; 

    printf("addition=덧셈(A), subtraction=뺄셈(S), multiplication=곱셈(M), division=나눗셈(D) 중에 무엇을 하시겠습니까? ");
    scanf("%c", &c); //수행할 연산을 입력받는다.

    printf("첫번째 숫자를 입력하세요: ");
    scanf("%f", &first_num); //첫번째 숫자를 입력받는다.

    printf("두번째 숫자를 입력하세요: ");
    scanf("%f", &second_num); //두번째 숫자를 입력받는다.

    switch(c){ //입력받은 연산에 따른 조건분기
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