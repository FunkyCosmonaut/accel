#include <iostream>

int main()
{
    { const std::string s = "a string";
      std::cout << s << std::endl; }

    { const std::string s = "another string";
      std::cout << s << std::endl; }


    return 0;
}

//works fine, first curly bracket destroys the variable before reinitializing in the second