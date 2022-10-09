#include "log.h"
#include <stdio.h>
#include <cstdarg>
#include <cstdlib>
#include <cstring>

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

void log(const char* format, ...)
{
	char buffer[1024];
	va_list args;
	va_start(args, format);
	char fmt[1024] = "[OpenBanapass] ";
	strcat_s(fmt, format);
	vsprintf_s(buffer, fmt, args);
	OutputDebugStringA(buffer);
	va_end(args);
}