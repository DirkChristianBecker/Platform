#include "ExecuteShellCommand.h"

namespace Platform
{
    String Execute(const String& cmd)
    {
        return Execute(cmd.c_str());
    }

    String Execute(const char* cmd)
    {
        std::array<char, 128> buffer;
        String result;
#ifdef WINDOWS
        std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
#endif

#ifdef LINUX
        std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
#endif
        if(!pipe) 
        {
            throw std::runtime_error("Popen() failed!");
        }

        while(fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) 
        {
            result += buffer.data();
        }

        return result;
    }
}