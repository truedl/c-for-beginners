// Danny wants to buy X computers for his company, one computer price is 95.125 coins.
// Write a program that help Danny to calculate it.

#include <stdio.h>

int main(){
    float computer_price = 92.125;
    int x;

    printf("Danny, how many computers you want to buy? ");
    scanf("%d", &x);

    printf("Price of %d computers is %.3f coins.", x, x * computer_price); //.3 represents that print 3point after dot

    return 0;
}