#include <iostream>
#include <string>

int main()
{
    std::cout << "Whaat is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;
              
    return 0;
}

//cin reads till space, just a word
//so it counts "Chris Munoz" as two inputs, use getline to get a line vs a word