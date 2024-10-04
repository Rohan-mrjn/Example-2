//1. Write a prgram to find the product of three numbers.
#include<stdio.h>
int main()
{
	int a,b,c,p;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Enter Third Number:");
	scanf("%d",&c);
	p=a*b*c;
	printf("Product of given three numbers=%d",p);
	return 0;
}
