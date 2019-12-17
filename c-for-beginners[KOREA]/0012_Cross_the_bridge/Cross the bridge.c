//어느 마을에는 깊어서 빠지면 위험한 강이 있다.
//이 마을에는 시장에 가려면 만들어진 다리를 건너야하는데
//자연재해로 인해 무너지고 말았다.
//따라서 당분간 이 강에 있는 흔들다리를 이용해야한다.
//다만 이 흔들다리는 오랜시간 이용하지 않아 중간중간 발판이 부셔질 수 있다.
//발판은 총 10개이며 각각 내구도가 다를 때, 몇명이 건널수 있을것인가 ?

//설명
//- 10개의 발판에 값을 내구도를 입력한다(1 - 5)
//- 사람들은 첫번째 발판부터 차례대로 움직이며 이때 각발판의 내구도는 1씩 줄어든다
//- 만약 다음 발판이 부셔졌다면 서있는 발판을 사용해 점프를 할수있다.
//(이경우 점프한만큼 기존 발판의 내구도가 감소)
//- 더이상 건널수 없을때 종료한다.

#include <stdio.h>
#include <stdlib.h>

int count = 0;
int main() {
	int bridge[10] = { 0 };
	int jump = 0;
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d 번째 발판의 내구도를 입력하세요: ", i+1);
		scanf("%d", &bridge[i]);
		if (bridge[i] > 5 || bridge[i] < 1) {
			printf("내구도가 범위 밖입니다[1-5]\n");
			i--;
			continue;
		}

	}
	i = 0;
	while (1) {
		if (i == 9) {
			bridge[i]--;
			count++;
			i = 0;
		}
		else if (bridge[i] > 0) { //일반적으로 건너갈때
			bridge[i]--;
			i++;
		}
		else if(bridge[i] <= 0) {
			while (1) { //점프 거리계산
				jump++;
				i++;
				if (bridge[i] != 0)
					break;
			}
			if (bridge[i - jump-1] < jump) { //점프가 불가능 할 때
				printf("%d 번째 발판이 무너져 건널수 없습니다\n", i-jump+1);
				break;
			}
			else { //점프가 가능 할 때
				bridge[i - jump-1] -= jump;
			}
		}
		jump = 0;
	}
	printf("\n");
	printf("%d 명 만이 다리를 건널 수 있습니다\n", count); //결과 출력
	return 0;
}