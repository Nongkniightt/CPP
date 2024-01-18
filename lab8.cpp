#include <stdio.h>
const int price = 350;
void change(int hour);
float total(int hour);
int hour,pay;
main(){
	printf("Enter hour:"); scanf("%d", &hour);
	printf("Enter pay:"); scanf("%d", &pay);
	change(hour);	
}


void change(int hour){
	float change;
	change = pay - total(hour);
	printf("CHANGE is %.0f \n",change);
}
float total(int hour){
	float total;
	total = price*hour;
	printf("TOTAL is %.0f \n",total);
	return total;
	
}		
