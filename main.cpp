#include<iostream>
#include<string>
#include<vector>
#include<sstream>

int main(){
    std::string input;
    std::vector<std::string> tokens;
    while(true){
        std::cout << "db > ";
        std::getline(std::cin,input);

        if(input.empty()) continue;

        tokens.clear();

        std::stringstream ss(input);
        std::string token;

        while(ss >> token){
            tokens.push_back(token);
        }

        if(tokens.empty()) continue;
        if(tokens[0]==".exit") break;

        std::cout << "Unrecognized command: " << input << "\n";
    }
}