//당신의 형제인 Alex는 다음주에 있을 40KM 마라톤에 참가하기위해 준비하고 있다.
//그는 당신에게 시작과 끝을 분단위로 표시해주는 스톱워치프로그램을 만들어달라고 요구하고있다.
#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    _Bool quit = 0;
    char c, s;

    while(!quit){
        printf("시작하시려면 엔터 혹은 종료하시려면 아무키나 눌러주세요.\n");
        scanf("%c", &c);

        switch(c){
            case '\n':
                start = clock(); //시작시간을 체크하여 저장
                printf("\n스톱워치를 멈추시려면 엔터를 눌러주세요.\n");
                scanf("%c", &s);
                end = clock() - start; //종료시간을 체크하여 저장
                printf("결과: %.3f 분.\n", end/1000.0/100.0);
                break;
            
            default:
                quit = 1;
                break;
        }
    }

    return 0;
}