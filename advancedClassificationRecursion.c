#include "NumClass.h"
#include <stdio.h>
int isArmstrongHelp(int num,int sum,int count);
int numDigits(int count);
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

int isArmstrong(int x)
{
    int temp=x;
    int sum=0;
    int num=numDigits(x);
    int n=isArmstrongHelp(x,sum,num);
    if(n==x)
        return 1;
    return 0; 

}

int numDigits(int count)
{
    int temp=count;
    int num=0;
     while(temp!=0)
    {
        temp=temp/10;
        num++;
    }
    return num;
}


int isArmstrongHelp(int num,int sum,int count)
{
    if(num==0)
        return sum;
    sum=sum+power(num%10,count); 
    return isArmstrongHelp(num/10,sum,count--);
}
