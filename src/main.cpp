#include <iostream>
#include <string>

#include "Game.hpp"


//! Todo implement triming white space
std::string getPlayerName(){
    std::string name;

    std::cout << "What do you want to be called?\n";
    std::getline(std::cin, name);

    return name;
}

int main(int argc, char const *argv[])
{

    std::cout << "Hello new player!\n";
    std::cout << "Welcome to the greatest RPG adventure\n";

    std::string playerName = getPlayerName();

    return 0;
}