#include <stdio.h>
#include <stdlib.h>

int main() {
	int width = 3;
	int height = 3;
	int i = 0;
	int j = 0;
	int xindex = 0;
	int yindex = 0;
	int check = 0;
	int answer[3][3];
	int iscorrect = 1;
	for (i = 0; i < height; i++) {//숫자 입력
		printf("숫자를 입력해주세요: ");
		for (j = 0; j < width; j++) {
			scanf("%d", &answer[i][j]);
		}
	}
	
	while (1) {
		for (i = 0; i < height; i++) { //가로 중복 확인
			for (j = 0; j < width; j++) {
				if (answer[yindex][xindex] == answer[yindex][j]) {
					if (xindex != j) {
						iscorrect = 0;
					}
				}
			}
			yindex++;
		}
		yindex = 0;
		for (i = 0; i < width; i++) { //세로 중복 확인
			for (j = 0; j < height; j++) {
				if (answer[yindex][xindex] == answer[j][xindex]) {
					if (yindex != j) {
						iscorrect = 0;
					}
				}
			}
			xindex++;
		}
		break;
	}
	if (iscorrect) { //결과적으로 문제가 없을경우
		printf("정답입니다. 탈출에 성공했습니다.\n");
	}
	else { //결과적으로 문제가 있을경우
		printf("틀렸습니다. 탈출에 실패했습니다.\n");
	}
	return 0;
	
}