#include<stdio.h>
int main()
{
	float b,h,area;
	printf("Enter the base and height(in cm):");
	scanf("%f%f",&b,&h);
	area=(0.5*b*h);
	printf("Area of triangle=%.2fcm\n",area);
	return 0;
}

