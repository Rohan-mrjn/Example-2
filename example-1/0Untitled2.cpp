#include<stdio.h>
int main()
{
	int i,s[10],c=0;
	for(i=0;i<10;i++)
	{
		printf("Enter salary of employees:");
		scanf("%d",&s[i]);
		if(s[i]>50000)
		c++;
	}
	printf("Total number of employees having salary more than 50000=%d",c);
}
