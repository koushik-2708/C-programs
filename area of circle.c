#include<stdio.h>
#define PI 3.14
int main()
{
	
	float radius,area;
	
	printf("Enter Radius of Circle(in cm):");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("Area of Circle=%.2fcm\n",area);
	return 0;
	
}
