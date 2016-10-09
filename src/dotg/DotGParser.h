////////////////////////////////////////////////////////////////////////////////
/// Reaper
///
/// Copyright (c) 2015-2016 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#ifndef REAPER_DOTGPARSER_INCLUDED
#define REAPER_DOTGPARSER_INCLUDED

#include <string>

namespace DotG
{
    REAPER_DOTG_API bool parse(const std::string& filename, bool parseTrace = false, bool scanTrace = false);
}

#endif // REAPER_DOTGPARSER_INCLUDED
