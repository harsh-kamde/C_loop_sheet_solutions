#include <stdio.h>

int main(){

    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    printf("\nPerfect number from 1 to %d\n",n);
    for (int i = 1; i <=n; i++)
    {
        int res=0;
        for(int j = 1; j<=i/2; j++){
            if(i%j==0){
                res += j;
            }
        }
        if(res == i){
            printf("%d, ",i);
        }
    }

    return 0;
}