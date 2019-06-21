// You found on the internet an owner of pizzeria. He wants to order a developer for writing a program where he can take orders. He need to type
// the count of pizzas, the number of additions to the pizza and if delivery is needed.
//
// Prices:
// One pizza is 20 coins
// One addition to pizza is 2 coins
// Delivery is more 5 coins

#include <stdio.h>

int main(){
    int pizza_price = 20, addition_price = 2, delivery_price = 5;
    int pizzas_count, additions_count, sum;
    _Bool delivery, quit = 0;
    char c, ch;

    while(!quit){
        printf("\nFor calculating new order type N.\nFor closing the program type Q.\nType: ");
        while(1){
            scanf("%c", &c);
            if(c != '\n'){
                break;
            }
        }

        switch(c){
            case 'Q':
                quit = 1;
                break;
            
            case 'N':
                printf("\n\nEnter the ordered pizzas count: ");
                scanf("%d", &pizzas_count);

                printf("\n\nEnter the ordered additions to the pizza count: ");
                scanf("%d", &additions_count);

                printf("\n\nDelivery? (Y/N): ");
                scanf(" %c", &ch);

                switch(ch){
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

                printf("Order price is %d coins.\n", sum);

                break;

            default:
                if(c != '\n'){
                    printf("Unknown option \"%c\".\n\n", c);
                }
                break;
        }
    }

    return 0;
}