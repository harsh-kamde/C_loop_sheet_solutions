#include <stdio.h>

//function to find factorial of number
int factorial(int n){
    int res = 1;
    for (int i = 2; i <=n; i++)
    {
        res *= i;
    }
    return res;
}

int main(){

    //A Strong number is the sum of it's digits factorial 
    // ex. 145 = 1! + 4! + 5! = 1 + 24 + 120 

    int num;

    printf("\nEnter a number: ");
    scanf("%d",&num);

    int temp=num;
    int res = 0;
    while(temp>0){
        int remainder = temp%10;
        res += factorial(remainder);
        temp /= 10;
    }
    if(res==num){
        printf("\n%d is a Strong number :)\n",num);
    }
    else{
        printf("\n%d is not a Strong number :(\n",num);
    }

    return 0;
}