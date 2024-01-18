#include <stdio.h>
void triangle(int base,int high);

main(){
	int b,h;
	printf("Enter Base:"); sacnf("%d",&b);
	printf("Enter High:"); sacnf("%d",&b);
	Triangle(b,h);
}

void triangle(int base,int high){
	float area;
	area = 0.5*base*high;
	printf("AREA is %.2f \n", area);
	
}

