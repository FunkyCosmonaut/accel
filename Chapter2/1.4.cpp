#include <iostream>

int main(){
    { std::string s = "a string";
      std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl;}}


    return 0;
}
//i predict the second declaration will write over the string
//It did, but since we wrote to cout before we redeclared it seemingly
//functions the same, changing it to };} on the endl line evokes error
