////////////////////////////////////////////////////////////////////////////////
/// Reaper
///
/// Copyright (c) 2015-2016 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#ifndef REAPER_DOTGDRIVER_INCLUDED
#define REAPER_DOTGDRIVER_INCLUDED

#include <string>
#include <map>

#include "Parser.h"

# define YY_DECL yy::dotg_parser::symbol_type yylex(DotGDriver& driver)

YY_DECL;

class DotGDriver
{
public:
    DotGDriver ();
    virtual ~DotGDriver ();

    std::map<std::string, int> variables;

    int result;

    // Handling the scanner.
    void scan_begin ();
    void scan_end ();
    bool trace_scanning;

    // Run the parser on file F.
    // Return 0 on success.
    int parse (const std::string& f);
    // The name of the file being parsed.
    // Used later to pass the file name to the location tracker.
    std::string file;
    // Whether parser traces should be generated.
    bool trace_parsing;

    // Error handling.
    void error (const yy::location& l, const std::string& m);
    void error (const std::string& m);
};

#endif // REAPER_DOTGDRIVER_INCLUDED
