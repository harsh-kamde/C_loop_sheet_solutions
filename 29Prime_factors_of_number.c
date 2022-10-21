#include <stdio.h>

int main()
{

    //first we divide the number from i = 2 to the number then check the value of i is prime
    // of not if it's prime then we will print it as factor of that number

    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);

    int isPrime;

    printf("\nPrime factors of %d are: ",num);
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 1;

            for (int j = 2; j <= (i / 2); j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime)
            {
                printf("%d, ", i);
            }
        }
    }
    return 0;
}
