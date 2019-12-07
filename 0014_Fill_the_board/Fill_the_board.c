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
	for (i = 0; i < height; i++) {//Type number
		printf("Fill the number: ");
		for (j = 0; j < width; j++) {
			scanf("%d", &answer[i][j]);
		}
	}
	
	while (1) {
		for (i = 0; i < height; i++) { //check horizen duplication
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
		for (i = 0; i < width; i++) { //check vertical duplication
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
	if (iscorrect) { //If there is no duplication
		printf("Correct! you can get out from here.\n");
	}
	else { //If there is one duplication at least
		printf("Incorrect! you can't get out from here.\n");
	}
	return 0;
	
}