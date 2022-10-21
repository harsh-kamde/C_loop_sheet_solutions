#include <stdio.h>

int main(){

    int num;
    printf("\nEnter the terms you want: ");
    scanf("%d",&num);

    int first = 0;
    int second = 1;
    int next = first+second;


    printf("\nFibonacci series: ");
    printf("%d, %d, ",first,second);
    for(int i=3; i<=num; i++){
        printf("%d, ",next);
        first = second;
        second = next;
        next = first+second;
    }


    return 0;
}