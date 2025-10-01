/* Find Digits
Problem Statement
You are given a number N, you need to print the number of positions where digits exactly divides N.
Input format
The first line contains T (number of test cases followed by T lines each containing N).
Constraints
1 <=T <= 15
0 < N < 10
Output Format
For each test case print the number of positions in N where digits in that number exactly divides the number N in separate line.
Input
1
12
Output
2
Explanation
2 digits in the number 12 divide the number exactly. Digits at ten's place, 1, divides 12 exactly in 12 parts, and digit at one's
place, 2 divides 12 equally in 6 parts. */
/*#include<stdio.h>
int main()
{
	int N,temp,num,flag;
	char choice,Y;
	choice=Y;
	while (choice==Y)
	{
		printf("Enter the number");
	    scanf("%d",&N);
	    temp=N;
	    while(temp!=0)
	    {
	    	num=temp%10;
	    	flag=N/num;
	    	printf("%d digit in the number %d divides it %d times equally",num,N,flag);
	    	
		}
		printf("Do you still want to continue?");
		scanf("%c",choice);
	}
*/
	
#include <stdio.h>

int main() 
{
    int T, N, originalN, digit, count;

    scanf("%d", &T);  

    for (int t = 0; t < T; t++) 
	{
        scanf("%d", &N);
        originalN = N;
        count = 0;
        while (N > 0) 
		{
            digit = N % 10;
            N = N / 10;
            if (digit != 0 && originalN % digit == 0) 
			{
                count++;
            }
        }
        printf("%d\n", count);
    }
	
}

