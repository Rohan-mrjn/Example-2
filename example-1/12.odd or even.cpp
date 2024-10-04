//12. Write a oprgram to check whether given number is odd or even.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any Number:");
	scanf("%d",&n);
	if(n%2==0)
	printf("%d is even",n);
	else
	printf("%d is odd",n);
	return 0;
}
