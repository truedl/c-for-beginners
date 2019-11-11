// The farmer love your last program you wrote!. He came back and asking for new version of your program but now instead of just wheat
// he is selling onions, tomatoes and carrots. He needs a new version that count the earnings by the kilograms of product he sell.
// Now his earnings need to stop at 1000 coins instead of 200 coins.
// Your challenger saying that you need to use functions here >:).
//
// Prices:
// Wheat (One kg) is 5 coins.
// Onion (One kg) is 10 coins.
// Tomato (One kg) is 7 coins.
// Carrot (One kg) is 8 coins.

#include <stdio.h>

float wheat_price = 5, onion_price = 10, tomato_price = 7, carrot_price = 8;

int wheat_to_coins(float kg){
    return kg * wheat_price;
}

int onion_to_coins(float kg){
    return kg * onion_price;
}

int tomato_to_coins(float kg){
    return kg * tomato_price;
}

int carrot_to_coins(float kg){
    return kg * carrot_price;
}

int main(){
    float kg, earnings = 0;
    char c;

    while(earnings < 1000){
        printf("Enter type of earning (Wheat [W], Onions [O], Tomato [T] or Carrot [C]): ");
        while(1){
            scanf("%c", &c);
            if(c != '\n'){
                break;
            }
        }

        printf("Enter the amount of kilograms you sell: ");
        scanf("%f", &kg);

        switch(c){
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
                printf("Uknown type of earning was provided.");
                break;
        }
    }

    printf("You've earned %.3f coins, you can take a break.", earnings);

    return 0;
}