#include <stdio.h>
#include "NumClass.h"

int main() {
    int num1, num2;

    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    printf("The Armstrong numbers are:", num1, num2);
         for (int i = num1; i <= num2; ++i) {
               if (isArmstrong(i)) {
            printf("%d ", i);
          }
         }
    printf("\n");
    printf("The Palindromes are:", num1, num2);
    for (int i = num1; i <= num2; ++i) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");


    printf("The Prime numbers are:", num1, num2);
    for (int i = num1; i <= num2; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    
    printf("The Strong numbers are:", num1, num2);
    for (int i = num1; i <= num2; ++i) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
