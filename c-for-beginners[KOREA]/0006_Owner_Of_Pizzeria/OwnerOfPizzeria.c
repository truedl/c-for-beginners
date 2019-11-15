//당신은 피자주문을 받기위한 프로그램을 개발하는 사람을 구하고 있는 pizzaria의 주인을 발견했다.그는 피자의 개수, 토핑의 개수, 배달여부를 입력받기를 원한다.

//가격:
//피자 한 판에 20 코인 입니다.
//토핑하나에 2 코인이 추가로 듭니다.
//배달은 5 코인이 추가로 듭니다.

#include <stdio.h>

int main(){
    int pizza_price = 20, addition_price = 2, delivery_price = 5;
    int pizzas_count, additions_count, sum;
    _Bool delivery, quit = 0;
    char c, ch;

    while(!quit){
        printf("새롭게 주문하시려면 N. 프로그램을 닫으시려면 Q 를 눌러주세요.\n입력: ");
        while(1){
            scanf("%c", &c);
            if(c != '\n'){
                break;
            }
        }

        switch(c){ //프로그램을 종료할지 새로운 주문을 받을지를 결정
            case 'Q':
                quit = 1;
                break;
            
            case 'N':
                printf("\n\n주문하실 피자의 개수를 입력해주세요: ");
                scanf("%d", &pizzas_count);

                printf("\n\n토핑의 개수를 입력해주세요: ");
                scanf("%d", &additions_count);

                printf("\n\n배달을 요청하시겠습니까? (Y/N): ");
                scanf(" %c", &ch);

                switch(ch){ //배달 여부를 결정
                    case 'Y':
                        delivery = 1;
                        break;
                    
                    case 'N':
                        delivery = 0;
                        break;
                    
                    default:
                        delivery = 0;
                        break;
                }

                sum = (pizza_price * pizzas_count) + (addition_price * additions_count);

                if(delivery){
                    sum += delivery_price;
                }

                printf("주문 비용은 %d 코인 입니다.\n", sum); //결과 출력

                break;

            default:
                if(c != '\n'){
                    printf("알 수 없는 옵션 입니다. \"%c\".\n\n", c); //메뉴 선택 예외처리
                }
                break;
        }
    }

    return 0;
}