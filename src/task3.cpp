//
// Created by kasya on 11.10.2020.
//
#include "task2.h"

unsigned long long sumPrime(unsigned int hbound){
    unsigned long long sum = 0;
    for (int i = 2; i < hbound; ++i){
        if (checkPrime(i)){
            sum += i;
        }
    }
    return sum;
}

