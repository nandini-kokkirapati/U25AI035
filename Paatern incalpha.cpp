#include<stdio.h>
int main()
{
	int i,j;
	for (i=4;i>=0;i--)
	{
		for (j=65;j<=69-i;j++)
		{
			printf("%c",j,(char)j);
			printf(" ");
		}
		printf("\n");
	}
}
