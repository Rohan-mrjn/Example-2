//11. Write a program to check whether given number is positive, neagtive or zero.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any Number:");
	scanf("%d",&n);
	if(n>0)
	printf("%d is positive",n);
	else if(n<0)
	printf("%d is negative",n);
	else
	printf("%d is zero");
	return 0;
}
