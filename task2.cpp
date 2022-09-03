/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <set>
#include <iterator>

int countCommonLetters(const std::string word1, const std::string word2) {
    std::set <char> common1;
    std::set <char> common2;
    
    for (char const &c: word1) {
       common1.insert(c);
    }
    
    for (char const &c: word2) {
       common2.insert(c);
    }
    
    std::set<char> output;
    std::set_intersection(common1.begin(), common1.end(), common2.begin(), common2.end(),
    std::inserter(output, output.begin()));
    
    return output.size();
}

int main()
{
    std::string word1 = "asdf";
    std::string word2 = "asdffff asdfsd qweqwewe";

    int common = countCommonLetters(word1, word2);
    std::cout << common;
    return 0;
}
