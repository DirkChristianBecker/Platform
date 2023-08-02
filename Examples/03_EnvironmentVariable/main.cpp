#include <EnvironmentVariable.h>

#include <string>
#include <iostream>
/**
 * MAIN
 */
int main(int argc, char** argv) 
{
    const char* name = "VULKAN_SDK";
    std::cout << "The value of '" << name << "' is '" << Platform::GetEnvironmentVariable(name) << "'" << std::endl;
    std::cout << "Press enter to quit." << std::endl;

    std::getchar();

    return 0;
}