#include <stdio.h>


int main(){

    int num,remainder,reverse=0;

    //ending zeroes not counting :(

    printf("\nEnter a number: ");
    scanf("%d",&num);

    

    while (num!=0)
    {
        remainder = num%10;
        reverse = reverse*10+remainder;
        num /=10;


    }
   
    
    while (reverse!=0)
    {
        remainder = reverse%10;
        switch(remainder){
            case 0: 
            printf("Zero ");
            break;

            case 1:
            printf("One ");
            break;

            case 2:
            printf("Two ");
            break;

            case 3:
            printf("Three ");
            break;

            case 4:
            printf("Four ");
            break;

            case 5:
            printf("Five ");
            break;

            case 6:
            printf("Six ");
            break;

            case 7:
            printf("Seven ");
            break;

            case 8:
            printf("Eight ");
            break;

            case 9:
            printf("Nine ");
            break;
        }

        reverse /= 10;
    }
    
   



    return 0;
}