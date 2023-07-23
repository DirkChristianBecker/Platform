#include <ExecuteShellCommand.h>

#include <string>
#include <iostream>
/**
 * MAIN
 */
int main(int argc, char** argv) 
{
#ifdef WINDOWS
    auto cmd = "dir";
#endif

#ifdef LINUX
    auto cmd = "ls";
#endif

    std::cout << "Executing shell command: '" << cmd << "'" << std::endl;
    std::cout << "'" << Platform::Execute(cmd) << "'" << std::endl;

    std::cout << "Press enter to quit." << std::endl;
    std::getchar();

    return 0;
}