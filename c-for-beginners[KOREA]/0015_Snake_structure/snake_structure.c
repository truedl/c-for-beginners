#include <stdio.h>
#include <stdlib.h>

typedef struct Snake { //뱀의 길이를 담을 구조체 선언
	int length;
} snake;

int main() {
	int food;
	snake sn;
	sn.length = 3; //뱀의 길이 초기화
	while (1) {
		printf("음식의 양을 입력하세요: ");
		scanf("%d", &food);
		if (sn.length < food) { //먹이가 뱀보다 클때
			break;
		}
		else { //먹이가 뱀보다 작거나 같을때
			sn.length += food;
		}
	}
	printf("너무 큰 먹이를 먹다 죽고 말았습니다. 뱀의 크기는 %dm 입니다\n", sn.length);


	return 0;
}