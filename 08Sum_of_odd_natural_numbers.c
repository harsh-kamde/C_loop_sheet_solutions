#include <stdio.h>

int main(){
    int num,res=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        if(i%2!=0){
            res += i;
        }
    }
    printf("The sum of the odd numbers is : %d",res);

    return 0;
}