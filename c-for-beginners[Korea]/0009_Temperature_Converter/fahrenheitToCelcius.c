#include<stdio.h>
 
void main()
{
    float cels, fahr;
 
    // Reading temperature in fahrenheit
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&fahr);
 
    // Fahrenheit to celsius conversion formula
    cels = (fahr - 32) * 5 / 9;

    // Print the result
    printf("\n Celsius = %.3f", cels); //.3f means correct to 3 decimal places
}