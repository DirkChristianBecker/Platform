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

	/// <summary>
	/// Get the path to the executable.
	/// 
	/// </summary>
	/// <returns></returns>
	Path GetExecutablePath();

	/// <summary>
	/// Combine both pathes into one.
	/// 
	/// </summary>
	/// <param name="root"></param>
	/// <param name="relative_part"></param>
	/// <returns></returns>
	Path BuildPath(const Path& root, const String& relative_part);

	/// <summary>
	/// Return a path relative to the executable path.
	/// 
	/// </summary>
	/// <param name="relative_path"></param>
	/// <returns></returns>
	Path GetPathRelativeToExecutable(const String& relative_path);
}