// 농부가 밀을 팔아서 하루에 버는 금액의 최대치를 쓴다 (그가 하루일을 마치려면 최소 200코인을 벌어야 합니다).
// 그가 그의 수입을 적을수 있고 200코인이 넘으면 멈춘다고 할때 최댓값을 구하는 프로그램을 작성하시오
#include <stdio.h>

int main(){
    float slot, earnings = 0;

    while(earnings < 200){ //농부가 일을 마치기 위한 조건
        printf("수입 입력: ");
        scanf("%f", &slot);

        earnings += slot;
    }

    printf("축하드립니다. 당신은 %.3f 코인을 벌어 쉴 수 있습니다.", earnings);

    return 0;
}