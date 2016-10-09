////////////////////////////////////////////////////////////////////////////////
/// Reaper
///
/// Copyright (c) 2015-2016 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#include "DotGDriver.h"

#include <iostream>

DotGDriver::DotGDriver()
:   trace_scanning(false)
,   trace_parsing(false)
{
    variables["one"] = 1;
    variables["two"] = 2;
}

DotGDriver::~DotGDriver ()
{
}

int DotGDriver::parse(const std::string &f)
{
    file = f;
    scan_begin();
    yy::dotg_parser parser(*this);
    parser.set_debug_level (trace_parsing);
    int res = parser.parse();
    scan_end();
    return res;
}

void DotGDriver::error(const yy::location& l, const std::string& m)
{
    std::cerr << l << ": " << m << std::endl;
}

void DotGDriver::error(const std::string& m)
{
    std::cerr << m << std::endl;
}
