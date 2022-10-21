#include <stdio.h>

int main(){

    int num,remainder,reverse=0;

    printf("\n\nEnter a number: ");
    scanf("%d",&num);

    int temp = num;

    while (temp!=0)
    {
        remainder = temp%10;
        reverse = reverse*10+remainder;
        temp /= 10;
    }

    if(reverse == num){
        printf("\n%d is the pallindrome number\n\n",num);
    }
    else
    {
        printf("\n\nThe given number is not a pallindrome number\n\n");
    }
    
    

    return 0;
}