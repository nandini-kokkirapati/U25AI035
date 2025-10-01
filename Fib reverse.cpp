#include <stdio.h>

int main() 
{
    int n,i;

    printf("Enter the number");
    scanf("%d", &n);
    int fib[n]; 
    fib[0] = 0;
    if (n > 1) 
    {
        fib[1] = 1;
    }
    for (i = 2; i < n; i++) 
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("Order:\n");
    for (i = n - 1; i >= 0; i--) 
    {
        printf("%d ", fib[i]);
    }
    printf("\n");
}
