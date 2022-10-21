#include <stdio.h>

int main(){

    int num1,num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    int largest = (num1>num2)?num1:num2;

    int lcm = largest;

    while(1){
        if(lcm%num1==0 && lcm%num2==0){
            break;
        }
        lcm += largest;
    }
    
    printf("The LCM of %d and %d is %d",num1,num2,lcm);

    return 0;
}