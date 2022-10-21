#include <stdio.h>

int main(){

    int num1,num2;

    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter second number: ");
    scanf("%d",&num2);

    int smaller;
    if(num1>num2){
        smaller = num2;
    }
    else{
        smaller = num1;
    }
    //alternate small
    // smaller = (num1>num2)?num2:num1;

    int hcf=1;

    for (int i = 1; i <=smaller ; i++)
    {
        if(num1%i==0 && num2%i ==0){
            hcf = i;
        }
    }
    
    printf("\nThe hcf of %d and %d is %d\n",num1,num2,hcf);

    return 0;
}