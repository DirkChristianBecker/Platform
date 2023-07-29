#include <StringTools.h>

#include <string>
#include <iostream>
/**
 * MAIN
 */
int main(int argc, char** argv) 
{
    std::string haystack;
    std::string needle;
    std::cout << "Enter quit as the haystack to quit" << std::endl;
    while(haystack != "quit")
    {
        std::cout << "Enter haystack:" << std::endl;
        std::getline(std::cin, haystack);

        if(haystack == "quit") { break; }
        
        std::cout << "Enter needle" << std::endl;
        std::getline(std::cin, needle);
        if(Platform::EndsWith(haystack, needle))
        {
            std::cout << "'" << haystack << "' ends with '" << needle << "'" << std::endl;
        }
        else
        {
            std::cout << "'" << haystack << "' does not end with '" << needle << "'" << std::endl;
        }
    }

    return 0;
}