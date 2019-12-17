//농부는 당신이 작성한 프로그램 덕분에 행복한 나날을 지내고 있었습니다.
//하지만 최근에 양파 농사를 짓는 사람이 늘어나서 가격을 5 코인으로
//내릴 필요가 있다고생각하였습니다.
//따라서 기존 프로그램에 가격을 수정하는 기능이 필요해 당신을 찾아왔습니다.
//그는 여전히 1000 코인을 벌어야 쉴 수 있습니다.
//다만 언제 어떻게 변할지 모르니 모든 품목에 대하여 변경이 가능해야합니다.

//기존 가격:
//밀(1 kg) 은 5 코인 입니다.
//양파(1 kg) 는 10 코인 입니다.
//토마토(1 kg) 는 7 코인 입니다.
//당근(1 kg) 은 8 코인 입니다.

#include <stdio.h>

float wheat_price = 5, onion_price = 10, tomato_price = 7, carrot_price = 8;


int wheat_to_coins(float kg) { //양을 받아 밀 값을 계산
	return kg * wheat_price;
}

int onion_to_coins(float kg) { //양을 받아 양파 값을 계산
	return kg * onion_price;
}

int tomato_to_coins(float kg) { //양을 받아 토마토 값을 계산
	return kg * tomato_price;
}

int carrot_to_coins(float kg) { //양을 받아 당근 값을 계산
	return kg * carrot_price;
}

int main() {
	float kg = 0;
	float earnings = 0;
	float newprice = 0;
	char c;
	char m;

	while (earnings < 1000) {
		printf("메뉴를 선택하세요 (가격변경 [M], 판매 [S]): "); //메뉴 선택
		scanf("%c", &m);
		switch (m) {
		case 'M':
			printf("수입원을 입력하세요 (밀 [W], 양파 [O], 토마토 [T] 당근 [C]): ");
			scanf("%c", &c);
			printf("새로운 가격을 입력하세요(coin): ");
			scanf("%d", &newprice);
			switch (c) { //새로운 가격을 입력받아 수입원의 가격을 변경
			case 'W':
				wheat_price = newprice;
				printf("밀의 가격을 %d coin 으로 변경하였습니다.\n", wheat_price);
				break;

			case 'O':
				onion_price = newprice;
				printf("양파의 가격을 %d coin 으로 변경하였습니다.\n", onion_price);
				break;

			case 'T':
				tomato_price = newprice;
				printf("토마토의 가격을 %d coin 으로 변경하였습니다.\n", tomato_price);
				break;

			case 'C':
				carrot_price = newprice;
				printf("당근의 가격을 %d coin 으로 변경하였습니다.\n", carrot_price);
				break;

			default:
				printf("알 수 없는 수입원이 제공 되었습니다.");//예외처리
				break;
			}
			break;
		case 'S':
			printf("수입원을 입력하세요 (밀 [W], 양파 [O], 토마토 [T] 당근 [C]): ");
			scanf("%c", &c);

			printf("당신이 판매할 양을 입력하세요(kg): ");
			scanf("%f", &kg);

			switch (c) { //양을 입력받아 수입원에 따른 계산함수를 호출
			case 'W':
				earnings += wheat_to_coins(kg);
				break;

			case 'O':
				earnings += onion_to_coins(kg);
				break;

			case 'T':
				earnings += tomato_to_coins(kg);
				break;

			case 'C':
				earnings += carrot_to_coins(kg);
				break;

			default:
				printf("알 수 없는 수입원이 제공 되었습니다.");//예외처리
				break;
			}
		}
		
	}

	printf("당신은 %.3f 코인을 벌었습니다, 이제 쉴 수 있습니다.", earnings);

	return 0;
}