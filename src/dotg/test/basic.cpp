#include "pch/stdafx.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "dotg/DotGParser.h"

TEST_CASE("Basic test files", "[basic]")
{
    SECTION("empty")
    {
        CHECK(DotG::parse("/home/ryp/Reaper/src/dotg/test/empty.g") == false);
    }

    SECTION("valid")
    {
        CHECK(DotG::parse("/home/ryp/Reaper/src/dotg/test/valid.g") == true);
    }

    SECTION("invalid")
    {
        CHECK(DotG::parse("/home/ryp/Reaper/src/dotg/test/invalid.g") == false);
    }
}
