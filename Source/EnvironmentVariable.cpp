#include "EnvironmentVariable.h"

namespace Platform
{
	String GetEnvironmentVariable(const String& name)
	{
#ifdef WINDOWS
		char* buf = nullptr;
		size_t sz = 0;
		if(_dupenv_s(&buf, &sz, name.c_str()) == 0 && 
		   buf != nullptr)
		{
			return String(buf);
		}

		return "";
#else
		const char* env_p = std::getenv(name.c_str());
		if(!env_p)
		{
			return "";
		}

		return String(env_p);
#endif
	}
}