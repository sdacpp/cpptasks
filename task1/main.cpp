#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

void reverseString(std::string &inputString) {    
    std::reverse(inputString.begin(), inputString.end());
}

int main()
{
    std::string inputString1 = "my input string";
    std::string &reversedString1 = inputString1;

    reverseString(reversedString1);
    std::cout << reversedString1 << std::endl;
  
    std::string inputString2 = "gnirts tupni ym";
    std::string &reversedString2 = inputString2;
  
    reverseString(reversedString2);
    std::cout << reversedString2 << std::endl;
    return 0;
}
