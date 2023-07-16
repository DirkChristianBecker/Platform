
#include <ExecutablePath.h>

#include <string>
#include <iostream>
/**
 * MAIN
 */
// #pragma warning(suppress: 4100)
int main(int argc, char** argv) 
{
    auto relative = "../../data";
    std::cout << "The executable lives in " << Platform::GetExecutablePath().string() << std::endl;
    std::cout << relative << " relative to the executable would be: " << Platform::GetPathRelativeToExecutable(relative) << std::endl;
    std::cout << "Press any key to quit." << std::endl;
    std::getchar();

    return 0;
}