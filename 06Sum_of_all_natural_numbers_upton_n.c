#include <stdio.h>

int main(){
    int num,res=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        res += i;
    }
    printf("%d is the sum of numbers",res);

    return 0;
}