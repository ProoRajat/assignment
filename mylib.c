#include "mylib.h"

int reverseDigits(int num) {
    int revNum = 0;
    while (num != 0) {
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }
    return revNum; 
}

int isArmstrong(int num) {
    int digits = 0, sum = 0;

    for (int i = num; i != 0; i /= 10)
        digits++;


    for (int i = num; i != 0; i /= 10){
        int term = i % 10, p = 1;
        for (int j = 0; j < digits; j++)
            p *= term;
        sum += p;
    }
    return sum == num;
}

int isAdams(int num) {
    int revNum = reverseDigits(num);
    return revNum * revNum == reverseDigits(num * num);
}

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isPrimePalindrome(int num) {
    if (!isPrime(num))
        return 0;
    return num == reverseDigits(num);
}