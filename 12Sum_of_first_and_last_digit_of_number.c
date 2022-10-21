#include <stdio.h>

int main(){
    int num,first,last;
    printf("Enter a number: ");
    scanf("%d",&num);

    first = num;
    while(first>=10){
        first /= 10;
    }
    last = num%10;
    printf("The first digit is : %d \n",first);
    printf("The last digit is: %d \n",last);
    printf("The sum of first and last is : %d \n",first+last);


    return 0;
}