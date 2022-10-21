#include <stdio.h>

int main(){

    int num,rem,remainder,reverse=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    while (num!=0)
    {
        remainder = num%10;
        reverse = reverse*10+remainder;
        num /= 10;
    }

    printf("Reverse is %d",reverse);
    

    return 0;

}