#include <stdio.h>

int main(){
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);

    i = num;
    while(i>=1){
        printf("%d ",i);
        i--;
    }

    return 0;
}