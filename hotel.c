#include <stdio.h>

int main(){
	int arr_time;
	int price;
	printf("Enter the number of hours past noon of your arrival:");
	scanf("%d", & arr_time);
	price = 10 + (arr_time *5);

	if(price > 53){
	  (price = 53);
	}
	printf("You have to pay $%d\n", price);
	return 0;
}

