//농부는 당신이 작성한 프로그램을 맘에 들어했습니다.그는 다시 찾아와 이제는 밀 뿐만 아니라 양파, 토마토, 당근도 팔고있다면서 새로운 버전을 요구합니다.
//그는 그가 파는 양(kg)에 따른 수입계산을 하는 새로운 버전을 원하고 있습니다.
//이제 그는 200 코인이 아니라 1000 코인을 벌어야 쉴 수 있습니다.
//당신의 도전자는 새로운 함수를 써야겠다고 하고 있습니다.

//가격:
//밀(1 kg) 은 5 코인 입니다.
//양파(1 kg) 는 10 코인 입니다.
//토마토(1 kg) 는 7 코인 입니다.
//당근(1 kg) 은 8 코인 입니다.

#include <stdio.h>

float wheat_price = 5, onion_price = 10, tomato_price = 7, carrot_price = 8;

int wheat_to_coins(float kg){ //양을 받아 밀 값을 계산
    return kg * wheat_price;
}

int onion_to_coins(float kg){ //양을 받아 양파 값을 계산
    return kg * onion_price;
}

int tomato_to_coins(float kg){ //양을 받아 토마토 값을 계산
    return kg * tomato_price;
}

int carrot_to_coins(float kg){ //양을 받아 당근 값을 계산
    return kg * carrot_price;
}

int main(){
    float kg, earnings = 0;
    char c;

    while(earnings < 1000){
        printf("수입원을 입력하세요 (밀 [W], 양파 [O], 토마토 [T] 당근 [C]): ");
        while(1){
            scanf("%c", &c);
            if(c != '\n'){
                break;
            }
        }

        printf("당신이 판매할 양을 입력하세요(kg): ");
        scanf("%f", &kg);

        switch(c){ //양을 입력받아 수입원에 따른 계산함수를 호출
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

    printf("당신은 %.3f 코인을 벌었습니다, 이제 쉴 수 있습니다.", earnings);

    return 0;
}