#include <stdio.h>

int main(){

    int num;

    printf("\nEnter a number: ");
    scanf("%d",&num);

    printf("\nFactors: ");
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d, ",i);
        }
    }

    return 0;
}