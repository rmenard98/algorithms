#include <iostream>

bool func (char*);

int main (){
    char *str = "Hello, World";
    std::cout << str << " " << func(str) << std::endl; 
    return 0;
}

bool func (char *str){
    int length;
    for (length =0; str[length]; ++length){
    for (int i = 0; i< length /2; ++i){
        if (str[i] != str[length - i - 1]){
            return false; 
        }
    }
    return true;
    }
}