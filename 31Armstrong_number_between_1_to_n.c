#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("\nEnter the last bound upto which you want armstrong numbers: ");
    scanf("%d",&n);

    printf("\nArmstrong number between 1 to %d are: \n",n);
    for(int i=1; i<=n; i++){

        int digits = log10(i)+1;
        int remainder, result=0;


        int temp = i;
        while(temp>0){
            remainder = temp%10;
            result += pow(remainder,digits);
            temp /= 10;
        }
        
        if(i==result){
            printf("%d, ",i);
        }
    }
    printf("\n\n");

    return 0;
}