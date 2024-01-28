#include <stdio.h>
#include "NumClass.h"
int power(int a );


int isPalindrome(int a){

int original= a;
int reverse=0;
while (a>0)
{
    reverse= reverse* 10 + a% 10;
    a = a/10;
}
if (original==reverse)
{
    return 1;
}

return 0;


}
int power(int a){
    int count =0;
    int j=a;

    while (a>0)
    {

        a = a / 10;
        count+=1;
    }
    
    int power = 0;

    while (j>0)
    {
         int sum=1;

        int count1 = count;
        int temp = (j%10);
        j=j/10;

        while ( 0 < count1)
        {
           
            sum = sum*temp;
            count1--;
        }
        power+=sum;
    }
    
   
 return power;

 }


int isArmstrong(int a){

     if (power(a)==a)
    {
        return 1;
    
    }
     
    return 0;
}

