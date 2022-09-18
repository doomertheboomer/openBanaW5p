#pragma once
#include <Windows.h>
#include <libloaderapi.h>
#include "kiero/kiero.h"
#include "kiero/minhook/include/MinHook.h"
#include "kiero/injector/injector.hpp"
#include "banapassFunc/banapass.h"
#include "banapassFunc/log.h"

typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;