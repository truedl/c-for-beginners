//Joy is from Canada where temperature is measured in celcius.

//Joy goes to USAand finds himself in trouble all the time as temperature is measured in Fahrenheit.

//Knowing formula to convert temperature, help Joy to convert temperature from Fahrenheit to Celcius.
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