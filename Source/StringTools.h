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

namespace Platform
{
	template<typename T> using Vector = std::vector<T>;
	using String = std::string;

	template <typename Out>
	void Split(const String& s, char delim, Out result) {
		std::istringstream iss(s);
		String item;
		while (std::getline(iss, item, delim)) {
			*result++ = item;
		}
	}
	Vector<String> Split(const String& s, char delim);
}