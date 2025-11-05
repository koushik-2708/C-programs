#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	//Input
	printf("Enter an integer:");
	scanf("%lf",&num);
	root=sqrt(num);
	printf("The Square Root of %.21f is %.21f.",num,root);
	return 0;
}
