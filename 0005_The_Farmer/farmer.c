// Max the farmer wants to write daily his earnings from selling wheat (Max need to earn minimum 200 coins to end his working day).
// Write a program for Max that he can write his earnings and stop after he reaches 200+ coins.

#include <stdio.h>

int main(){
    float slot, earnings = 0;

    while(earnings < 200){ //Condition that the farmer ends his working.
        printf("Enter earnings: ");
        scanf("%f", &slot);

        earnings += slot;
    }

    printf("Congratulations!. You reach %.3f coins and now you can take a break.", earnings);

    return 0;
}