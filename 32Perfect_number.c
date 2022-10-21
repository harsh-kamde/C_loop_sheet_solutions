#include <stdio.h>

int main(){

    //A perfect number is equal to the sum of its divisor except the number
    //ex. 6 = 1+2+3 

    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);

    int result =0;

    for(int i=1; i<=num/2; i++){
        if(num%i==0){
             result += i;
        }
    }

    if(num == result){
        printf("\n%d is a perfect number:)",num);
    }
    else{
        printf("\n%d is not a perfect number:(\n",num);
    }

    return 0;
}
