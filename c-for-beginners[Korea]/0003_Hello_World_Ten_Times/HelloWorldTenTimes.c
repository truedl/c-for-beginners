// Hello, World! 를 반복하여 10번 출력하시오.

#include <stdio.h>

int main(){
    for(int i = 0; i < 10; i++){ //i값을 0으로 초기화 해줌과 동시에 10보다 작을동안 i값을 1씩 늘리면서 반복
        printf("Hello, World!\n");
    }

    return 0;
}