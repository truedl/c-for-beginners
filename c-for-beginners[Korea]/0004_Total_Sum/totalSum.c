// Danny는 회사일 때문에 X대의 컴퓨터를 구입하려고 한다. 컴퓨터 한대의 가격은 95.125 코인 이다.
// Danny의 계산을 도와주는 프로그램을 작성하시오

#include <stdio.h>

int main(){
    float computer_price = 92.125;
    int x;

    printf("Danny는 컴퓨터를 몇대나 사고싶은가? ");
    scanf("%d", &x);

    printf("컴퓨터 %d 대의 가격은 %.3f 코인 입니다. ", x, x * computer_price); //.3은 소수점 뒷자리를 3자리까지만 출력함을 나타낸다.

    return 0;
}