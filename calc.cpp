#include <iostream>

int main (){
    std::cout <<"num1: ";
    std::string a;
    std::cin>> a;
    std::cout <<"num2: ";
    std:: string b;
    std::cin>> b;
    std::cout<< "what would you like to do? ";
    char opp;
    std::cin>> opp;
    
    switch(opp){
        case '+':
            int v = std:: stoi(a) +  std::stoi(b);
            break;
        case '-':
            int v = std:: stoi(a) - std::stoi(b);
            break;
        case '/':
            int v = std:: stoi(a) / std::stoi(b);
            break;
        case '*':
            int v = std:: stoi(a) * std::stoi(b);
            break:
    }



    
    
    std::cout << v << std::endl;

}