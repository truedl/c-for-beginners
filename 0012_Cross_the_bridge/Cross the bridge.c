#include <stdio.h>
#include <stdlib.h>

int count = 0;
int main() {
	int bridge[10] = { 0 };
	int jump = 0;
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("Type %d's footrest durability: ", i+1);
		scanf("%d", &bridge[i]);
		if (bridge[i] > 5 || bridge[i] < 1) {
			printf("Durability is out of range [1-5]\n");
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
		else if (bridge[i] > 0) { //case cross bridge
			bridge[i]--;
			i++;
		}
		else if(bridge[i] <= 0) {
			while (1) { //cal jump size
				jump++;
				i++;
				if (bridge[i] != 0)
					break;
			}
			if (bridge[i - jump-1] < jump) { //case when they can't jump
				printf("%d's footrest is broken so they can't cross the bridge\n", i-jump+1);
				break;
			}
			else { //case when they can jump
				bridge[i - jump-1] -= jump;
			}
		}
		jump = 0;
	}
	printf("\n");
	printf("%d people can cross the bridge", count); //print output
	return 0;
}