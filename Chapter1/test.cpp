#include <iostream>
#include <string>

int main(){

std::string teststring(10, ' ');
std::string yourmom = "Your momma ";
std::string joke = "she eats dicks for breakfast";
std::string durr = yourmom + joke;
const std::string test = "I" + ("is" + joke);
//only seems to work if there is at least 1 object

std::cout << test << std::endl;

std::cout << durr << std::endl;

std::cout << teststring << std::endl;
return 0;


}