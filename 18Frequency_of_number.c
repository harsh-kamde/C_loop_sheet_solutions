#include <stdio.h>

int main(){

    int num,remainder,digitCount[10];

    printf("\nEnter a number: ");
    scanf("%d",&num);

    for(int i =0; i<sizeof(digitCount)/4 ; i++){
        digitCount[i] = 0;
    }

    while (num!=0)
    {
        remainder = num%10;
        digitCount[remainder]++;
        num /=10;
    }

    printf("The frequency of the digits are : \n");
    for (int i = 0; i < sizeof(digitCount)/4; i++)
    {
        printf("\n%d : %d times found\n",i,digitCount[i]);
    }
    
    

    return 0;
}