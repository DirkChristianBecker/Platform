#include "StringTools.h"

namespace Platform
{
	String Replace(String haystack, const String needle, const String replacement)
	{
		auto start = haystack.find(needle, 0);
		auto length = needle.size();

		return haystack.replace(start, length, replacement);
	}

	Vector<String> Split(const String& s, char delim) {
		Vector<String> elems;
		Split(s, delim, std::back_inserter(elems));
		return elems;
	}
}