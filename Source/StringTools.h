#pragma once

#include <unordered_map>
#include <string>
#include <memory>
#include <iostream>
#include <string_view>
#include <stdarg.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <cinttypes>
#include <utility>

#include "Types.h"

namespace Platform
{
	template <typename Out>
	void Split(const String& s, char delim, Out result) 
	{
		std::istringstream iss(s);
		String item;
		while (std::getline(iss, item, delim)) 
		{
			*result++ = item;
		}
	}

	/// <summary>
	/// Split a string along a delimiter.
	/// 
	/// </summary>
	/// <typeparam name="Out"></typeparam>
	/// <param name="s">The string to split</param>
	/// <param name="delim">A delimiter symbol</param>
	Vector<String> Split(const String& s, char delim);

	/// <summary>
	/// Replace the needle inside the haystack with the given replacement.
	/// 
	/// </summary>
	/// <param name="haystack"></param>
	/// <param name="needle"></param>
	/// <param name="replacement"></param>
	/// <returns></returns>
	String Replace(String& haystack, const String& needle, const String& replacement);

	/// <summary>
	/// Returns true, if the input string ends with the given ending.
	/// 
	/// </summary>
	/// <param name="input"></param>
	/// <param name="ending"></param>
	/// <returns></returns>
	bool EndsWith(std::string const& input, std::string const& ending);

	/// <summary>
	/// Returns true, if the input string begins with the given beginning.
	/// </summary>
	/// <param name="input"></param>
	/// <param name="ending"></param>
	/// <returns></returns>
	bool StartsWith(const String& input, const String& beginning);
}