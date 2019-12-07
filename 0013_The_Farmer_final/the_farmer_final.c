//Farmer has a good day because of program which you make.
//But Recently people who cultivates onion mount up fastly.
//So He thinks that He needs to change onion price 10 5 coins.
//Thus Farmer asks you of add modify price fuction in this program.

//He still can take a break after earning 1000 coins.
//You should make fuction which changes price of all crops.

//base Prices :
//Wheat(One kg) is 5 coins.
//Onion(One kg) is 10 coins.
//Tomato(One kg) is 7 coins.
//Carrot(One kg) is 8 coins.

#include <stdio.h>

float wheat_price = 5, onion_price = 10, tomato_price = 7, carrot_price = 8;


int wheat_to_coins(float kg) { //function to return total price selling wheat
	return kg * wheat_price;
}

int onion_to_coins(float kg) { //function to return total price selling onion
	return kg * onion_price;
}

int tomato_to_coins(float kg) { //function to return total price selling tomato
	return kg * tomato_price;
}

int carrot_to_coins(float kg) { //function to return total price selling carrot
	return kg * carrot_price;
}

int main() {
	float kg = 0;
	float earnings = 0;
	float newprice = 0;
	char c;
	char m;

	while (earnings < 1000) {
		printf("Select Menu (Modify Price [M], Selling [S]): "); //menu selection
		scanf("%c", &m);
		switch (m) {
		case 'M':
			printf("Enter type of earning (Wheat [W], Onions [O], Tomato [T] or Carrot [C]): ");
			scanf("%c", &c);
			printf("Type new price(coin): ");
			scanf("%d", &newprice);
			switch (c) { //Type new price and modify earning's price
			case 'W':
				wheat_price = newprice;
				printf("Change Wheat price to %d coin\n", wheat_price);
				break;

			case 'O':
				onion_price = newprice;
				printf("Change Onion price to %d coin\n", onion_price);
				break;

			case 'T':
				tomato_price = newprice;
				printf("Change tomato price to %d coin\n", tomato_price);
				break;

			case 'C':
				carrot_price = newprice;
				printf("Change Carrot price to %d coin\n", carrot_price);
				break;

			default:
				printf("Uknown type of earning was provided.");//handle exception
				break;
			}
			break;
		case 'S':
			printf("Enter type of earning (Wheat [W], Onions [O], Tomato [T] or Carrot [C]): ");
			scanf("%c", &c);

			printf("Enter the amount of kilograms you sell: ");
			scanf("%f", &kg);

			switch (c) { // Call correct function that you selected what you want to sell and how many do you want to sell
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
				printf("Uknown type of earning was provided.");//handle exception
				break;
			}
		}
		
	}

	printf("You've earned %.3f coins, you can take a break.", earnings);

	return 0;
}