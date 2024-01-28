#include <stdio.h>
#include "NumClass.h"

int main() {
    int num1, num2;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);

    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    printf("Prime numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Armstrong numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Strong numbers between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; ++i) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Palindromes between %d and %d:\n", num1, num2);
    for (int i = num1; i <= num2; ++i) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}