
#include <ExecutablePath.h>

#include <string>
#include <iostream>
/**
 * MAIN
 */
// #pragma warning(suppress: 4100)
int main(int argc, char** argv) 
{
    std::cout << "The executable lives in " << Platform::GetExecutablePath().string() << std::endl;
    std::cout << "Press any key to quit." << std::endl;
    std::getchar();

    return 0;
}