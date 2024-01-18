#include <stdio.h>
const int BATH = 450;
void total(int hour);

main(){
	int hour;
	printf("Enter hour:"); scanf("%d", &hour);
	total(hour);
}

void total(int hour){
	float total;
	total = BATH*hour;
	printf("TOTAL is %.0f \n",total);
	
}

