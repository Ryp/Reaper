////////////////////////////////////////////////////////////////////////////////
/// Reaper
///
/// Copyright (c) 2015-2017 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#ifndef REAPER_XLIB_WINDOW_INCLUDED
#define REAPER_XLIB_WINDOW_INCLUDED

#include "Window.h"

#include <X11/Xlib.h>

class REAPER_RENDERER_API XLibWindow : public IWindow
{
public:
    XLibWindow(const WindowCreationDescriptor& creationInfo);
    ~XLibWindow();

    bool renderLoop(AbstractRenderer* renderer) override;

public:
    Display*    DisplayPtr;
    Window      Handle;
};

#endif // REAPER_XLIB_WINDOW_INCLUDED
