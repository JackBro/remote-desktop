/*
* PROJECT:         Aspia Remote Desktop
* FILE:            base/clipboard_win.h
* LICENSE:         See top-level directory
* PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
*/

#ifndef _ASPIA_BASE__CLIPBOARD_WIN_H
#define _ASPIA_BASE__CLIPBOARD_WIN_H

#include "aspia_config.h"

#include <string>

class Clipboard
{
public:
    static void Set(const std::string &str);
    static std::string Get();
};

#endif // _ASPIA_BASE__CLIPBOARD_WIN_H
