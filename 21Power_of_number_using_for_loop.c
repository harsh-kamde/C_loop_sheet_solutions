#include <stdio.h>

int main(){

    int num,exponent,result=1;

    printf("\nEnter the base number: ");
    scanf("%d",&num);

    printf("\nEnter the exponent of base: ");
    scanf("%d",&exponent);

    for (int i = 0; i < exponent; i++)
    {
        result *= num;
    }

    printf("\nThe result is %d",result);
    

    return 0;
}