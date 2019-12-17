#include <stdio.h>
#include <stdlib.h>

typedef struct Snake { //define structure includes snake's length
	int length;
} snake;

int main() {
	int food;
	snake sn;
	sn.length = 3; //initialize snake's length
	while (1) {
		printf("Type size of food: ");
		scanf("%d", &food);
		if (sn.length < food) { //when food is bigger than snake
			break;
		}
		else { //when snake is bigger than food
			sn.length += food;
		}
	}
	printf("Snake dies while eating food bigger than him. Total Length is %dm\n", sn.length);


	return 0;
}