//To find whether a given number is palindrome or not

#include <stdio.h>

double power(double base, double exponent) {
    int i = 0;
    double result = 1;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int number;
    int temp1, temp2;
    int palindrome;
    int lastDigit;
    int digitCount;
    scanf("%d", &number);
    temp1 = number;
    digitCount = 0;
    palindrome = 0;
    while (temp1 >= 1) {
        digitCount += 1;
        temp1 /= 10;
    }
    temp2 = number;
    while (digitCount > 0) {
        lastDigit = temp2 % 10;
        palindrome += lastDigit * power(10, digitCount - 1);
        temp2 /= 10;
        digitCount--;
    }
    (palindrome == number) ? printf("%d is a palindrome\n", palindrome) : printf("%d is not a palindrome\n", palindrome);
}
