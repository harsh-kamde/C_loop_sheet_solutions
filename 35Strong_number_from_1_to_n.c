#include <stdio.h>

int factorial(int n){
    int res = 1;
    for(int i=2; i<=n; i++){
        res *= i;
    }
    return res;
}

int main(){

    int num;
    printf("\nEnter the limit upto which you want Strong numbers: ");
    scanf("%d",&num);

    printf("Strong number between 1 to %d are: ",num);
    for(int i=1; i<=num; i++){
        int res = 0;
        int temp = i;
        while(temp>0){
            int remainder = temp%10;
            res += factorial(remainder);
            temp /= 10;
        }
        if(res == i){
            printf("%d, ",i);
        }
    }

    return 0;
}