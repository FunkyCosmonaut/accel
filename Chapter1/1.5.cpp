#include <iostream>
#include <string>

int main()
{
    { std::string s = "a string";
    { std::string x = s + ", really";
      std::cout << s << std::endl; }
      std::cout << x << std::endl;
      }


    return 0;
}

//hypothesis: might destroy x variable

//not valid, x variable was destroyed in the first complete bracket