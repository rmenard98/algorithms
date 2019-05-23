#include <iostream>
#include "string.hpp"

int helper(int x){
    return (x+5)%60;
}

String::String(){
    array = new char[1];
    array[0]= '\0';

}
String::String(const char *str){
    unsigned int length;
    for (length = 0; str[length]; ++length);
    array = new char[length +1];
    for (int i =0; i <= length;i++)
        array[i] = str[i];
}

String::~String(){
    delete[] array;
}

unsigned int String::length(){
    unsigned int length = 0;
    for (length; array[length]; ++length);
    return length;
}

void String::append(char c){
    char* new_array = new char[length+1];
    for (int i =0; array [i]; ++i)
        new_array[i] = array[i];
    delete[] array;

    new array[length++] = c;
    new array[length]= '\0';
     
}