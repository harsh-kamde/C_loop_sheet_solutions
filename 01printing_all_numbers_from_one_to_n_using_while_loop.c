#include <stdio.h>

int main(){
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);

    i = 1;
    while(i<=num){
        printf("%d ",i);
        i++;
    }

    return 0;
}
