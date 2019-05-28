#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"
#include <iostream>



int abs_val(int x){
    if(x<0)
        x = x*-1;
    return x;
}

int pow(int base, int num){
    if (num == 0 || base == 1){
        return 1;
    } else if (num == 1){
        return base;
    }
    
   int newNum = 1;
   for (int i = 1;i <= num; i++){
       newNum *= base;
   }
   return newNum;
}

int log(int base, int num){
    
    int counter = 0;
    for (int i =num;i > 0; --i){
       num /= base;
       counter++;
   }
   return counter;
   
}

int chartoint(char c){
return 0;   
}
char inttochar(int x){
    return 'a';
}
char chr(int){
    return 'a';
}

int ord(char){
    return 0;
}

int max(int, int){
    return 0;
}

int max(int, int, int){
    return 0;
}

int min(int, int){
    return 0;
}

int min(int, int, int){
    return 0;
}

int round(double, char){
    return 0;
}

bool prime(int){
    return true;
}
long fibonacci(int){
    return 0;
}

long factorial(int){
    return 0;
}