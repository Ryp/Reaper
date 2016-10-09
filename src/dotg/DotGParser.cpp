////////////////////////////////////////////////////////////////////////////////
/// Reaper
///
/// Copyright (c) 2015-2016 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#include "DotGParser.h"
#include "DotGDriver.h"

namespace DotG
{
    bool parse(const std::string& filename, bool parseTrace, bool scanTrace)
    {
        bool success = false;
        DotGDriver driver;

        driver.trace_parsing = parseTrace;
        driver.trace_scanning = scanTrace;

        success = !driver.parse(filename.c_str());

        if (success)
            std::cout << driver.result << std::endl;

        return success;
    }
}
