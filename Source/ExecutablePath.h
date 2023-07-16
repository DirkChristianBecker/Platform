#pragma once

#include <string>
#include <filesystem>
#include <memory>

#ifdef WINDOWS
	#include <Windows.h>
#endif

/// <summary>
/// Get the executable path of currently running application.
/// 
/// </summary>
namespace Platform
{
	using String = std::string;
	using Size = size_t;
	using Path = std::filesystem::path;

	Path GetExecutablePath();
	Path GetPathRelativeToExecutable(const String& relative_path);
}