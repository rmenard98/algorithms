#include <iostream>

int main(){
    std::cout<<"First Name?" ;
    std::string Fname;
    std::cin>> Fname;
    std::cout<<"Last Name?" ;
    std::string Lname;
    std::cin>> Lname;
    std::string greeting = "* Hello, "+ Fname + " " + Lname + "! *" ;
    std::string stars(greeting.size(),'*');

    std::cout <<stars <<std::endl;
    std::cout <<greeting<<std::endl;
    std::cout <<stars <<std::endl;


    return 0;
}