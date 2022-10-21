#include <stdio.h>

int prime(int n){
    for (int i = 2; i <=(n/2); i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(){

    int n;
    int sum =0;

    printf("\nEnter the number upto which you want prime numbers sum: \n");
    scanf("%d",&n);

    for (int i = 2; i <=n; i++)
    {
        if (prime(i))
        {
            sum+=i;
        }
        
    }
    printf("\nThe sum of the prime number : %d",sum);


    return 0;
}