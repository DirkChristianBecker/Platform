#pragma once

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

#include "Types.h"

namespace Platform
{
    String Execute(const String& cmd);
    String Execute(const char* cmd);
}