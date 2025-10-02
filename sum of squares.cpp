/*PROGRAM TO PRINT 1,4,9,16,25,………N. */

#include<stdio.h>
int main()
{
	int num,i,sum=0,square=1;
	printf("Enter the number");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		square=i*i;
		sum+=square;
	}
	printf("The sum of the series till n is %d",sum);
	
	return 0;
}
