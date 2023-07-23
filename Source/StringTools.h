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
}