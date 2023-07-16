#include "ExecutablePath.h"

namespace Platform
{
	Path GetExecutablePath()
	{
		char buffer[256];
		Size len = sizeof(buffer);

	#ifdef WINDOWS
		int bytes = GetModuleFileName(NULL, buffer, (DWORD)len);
		bytes = bytes ? bytes : -1;
	#endif

	#ifdef LINUX
		int bytes = MIN(readlink("/proc/self/exe", buffer, len), len - 1);
		if (bytes >= 0)
		{
			pBuf[bytes] = '\0';
		}
	#endif

		auto file = String(buffer);
		const Size last_slash_idx = file.rfind('\\');
		if (String::npos != last_slash_idx)
		{
			return Path(file.substr(0, last_slash_idx).c_str());
		}

		return Path(file);
	}
}

