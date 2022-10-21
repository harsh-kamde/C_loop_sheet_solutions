#include <stdio.h>

int main(){

    int num;

    printf("\nEnter a number: ");
    scanf("%d",&num);

    int isPrime=1;

    for (int i = 2; i <= (num/2); i++)
    {
        if (num%i==0)
        {
            isPrime = 0;
        }
        
    }

    if (isPrime)
    {
        printf("\n%d is a prime number :)",num);
    }
    else
    {
        printf("\n%d is not a prime number :(\n",num);
    }
    
    return 0;
}