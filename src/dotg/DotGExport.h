////////////////////////////////////////////////////////////////////////////////
/// Reaper
///
/// Copyright (c) 2015-2016 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#ifndef REAPER_DOTG_EXPORT_INCLUDED
#define REAPER_DOTG_EXPORT_INCLUDED

#include "core/Compiler.h"

// Make sure this is up to date with the build system.
#if defined(reaper_dotg_EXPORTS)
#define REAPER_DOTG_API REAPER_EXPORT
#else
#define REAPER_DOTG_API REAPER_IMPORT
#endif

#endif // REAPER_DOTG_EXPORT_INCLUDED
