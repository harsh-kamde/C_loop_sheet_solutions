#include <stdio.h>
#include <math.h>


int main(){

    //Armstrong number is a number whose digits powered by number of digits in that number
    // added together gives the number back 
    //ex. 6 = pow(6,1) and 371 = pow(3,3) + pow(7,3) + pow(1,3)
    //we will count digits in number and add the digit powered by digits in number to the result
    //  variable then compare the result with number if it's equal then it be armstrong number
 
    int num,digit=0,remainder,result=0;

    printf("\nEnter a number: ");
    scanf("%d",&num);

    // int testnum = num;
    // while (testnum!=0)
    // {
    //     digit++;
    //     testnum/=10;
    // }

    digit = log10(num)+1;

    printf("The number of digits are %d",digit);

    int temp = num;
    while(temp>0){
        remainder = temp%10;
        result += pow(remainder,digit);
        temp /= 10;
    }

    if(result == num){
        printf("\n%d is an armstrong number :)",num);
    }
    else{
        printf("\n%d is not an armstrong number :(\n",num);
    }

    return 0;
}