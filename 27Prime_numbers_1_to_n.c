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

    printf("\nEnter the number upto which you want prime numbers: ");
    scanf("%d",&n);

    for (int i = 2; i <=n; i++)
    {
        if (prime(i))
        {
            printf("%d ",i);
        }
        
    }
    


    return 0;
}