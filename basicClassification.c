#include "NumClass.h"

int isStrong(int a){
    int fake=a;
    int sum= 0;
    while(fake>0)
    {
        int temp = 0;
        temp = fake % 10;
        fake /= 10;
        int sum1=1;
        for (int i = temp; i > 0; i--)
            sum1 *= i;
        sum+=sum1;
    }

    return sum==a;
}

int isPrime(int a)
{
    for (int i = 2; i < a-1; i ++)
        if (a % i == 0)
            return 0;  
    return 1;
}


