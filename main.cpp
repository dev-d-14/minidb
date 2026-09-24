#include<iostream>
#include<string>

int main(){
    std::string input;
    while(true){
        std::cout << "db > ";
        std::getline(std::cin,input);
        if(input==".exist") break;
        std::cout << "Unrecognized command: " << input << "\n";
    }
}