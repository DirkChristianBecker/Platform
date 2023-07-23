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
}