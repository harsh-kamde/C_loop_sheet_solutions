#include <stdio.h>

int main(){
    int num,rem,result=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num>10){
        rem = num%10;
        result *= rem;
        num/=10;
    }
    printf("The product of the digits is: %d",result);
    return 0;
}