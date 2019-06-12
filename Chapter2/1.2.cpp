#include <iostream>

int main()
{
    const std::string exclam = "!";
    const std::string message = "Hello" + ", world" + exclam;

    std::cout << message << std::endl;

    return 0;
}
// Doesn't seem to work, left to right associativity seems to be screwing it up
// works fine with parenthesis
//not valid