#include <stdio.h>
#include <math.h>

int main(){
    int num,first,last;
    printf("Enter a number: ");
    scanf("%d",&num);

    first = num;
    while(first>=10){
        first = first/10;
    }
    last = num%10;

    //alternate method
    // int digits = log10(num);
    // first = num / pow(10,digits);
    // last = num%10;

    printf("First digit: %d Last digit: %d",first,last);

    return 0;
}