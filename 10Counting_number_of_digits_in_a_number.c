#include <stdio.h>
#include <math.h>

int main(){
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);

      int counter = 0;

    //alternate method
    // counter = log10(num);
    // printf("%d is the digits in the number ",counter+1);


  
    while(num!=0){
        num /= 10;
        counter++;
    }

    printf("It contains : %d digits",counter);

    return 0;
}