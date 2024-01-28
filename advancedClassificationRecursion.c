#include "NumClass.h"
#include <stdio.h>
int power(int a, int b)
{ 
    if (!b)
        return 1;
    return a * power(a, b - 1);
}

int reverse(int a, int reserve){
    if(a==0)
        return reserve;
    reserve = reserve * 10 + a % 10;
    return reverse(a/10,reserve);
}

int isPalindrome(int a){
    return a==reverse(a,0);
}

int length(int x)
{
    if (x < 10)
        return 1;
    return 1 + x / 10;
}

// Recursive helper function to find the sum of powers of digits
int sumOfPowers(int n, int digits) 
{
    if (n % 10 == n)
        return power(n, digits);
    return power(n % 10, digits) + sumOfPowers(n / 10, digits);
}

int isArmstrong(int a)
{
    return a == sumOfPowers(a, length(a));
}
