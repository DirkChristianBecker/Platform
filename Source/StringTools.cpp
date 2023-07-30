#include "StringTools.h"

namespace Platform
{
	String Replace(String& haystack, const String& needle, const String& replacement)
	{
		auto start = haystack.find(needle, 0);
		auto length = needle.size();

		return haystack.replace(start, length, replacement);
	}

	Vector<String> Split(const String& s, char delim) 
	{
		Vector<String> elems;
		Split(s, delim, std::back_inserter(elems));

		return elems;
	}

	bool EndsWith(std::string const& input, std::string const& ending)
	{
		if(input.length() >= ending.length())
		{
			return input.compare(
				input.length() - ending.length(),
				ending.length(),
				ending) == 0;
		}

		return false;
	}

	bool StartsWith(const String& input, const String& beginning)
	{
		if(input.length() >= beginning.length())
		{
			return input.compare(0, beginning.length(), beginning) == 0;
		}

		return false;
	}
}