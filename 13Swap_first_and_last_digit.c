#include <stdio.h>
#include <math.h>

int main(){
    
    // we have to swap the first and last digit of the number suppose a number 12345
    // we have to change it as 52341 So we do as 
    // first = first digit of number = 1;
    // midnum = numbers except first and last =num%pow(10,digits in number) = 2345
    // midnum = midnum /10 = 2345/10= 234
    // last = last digit of the number = 5
    // now we add this all as result = last * pow(10,digits in number) + middnum*10 + first
    // result = 5 * 10000 + 234*10 + 1 = 50000+2340+1 = 52341

    int num,first,last,midnum,digit,swap;

    printf("Enter a number: ");
    scanf("%d",&num);

    digit = log10(num);
    first = num / pow(10,digit);
    last = num%10;
    midnum = num % (int)pow(10,digit);
    midnum /= 10;

    swap = (last * pow(10,digit)) + (midnum*10) + first;

    printf("The %d swapped is %d",num,swap);



    return 0;
}