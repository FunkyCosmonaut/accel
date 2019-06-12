#include <iostream>

int main()
{
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";

    std::cout << message << std::endl;

    return 0;
}

//valid, works fine because hello is an object, when you try to
//concantenate individual strings into a var alone it doesn't work