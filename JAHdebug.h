#ifndef _debugCpp_H
#define _debugCpp_H

#ifdef WIN32

#include <iostream>
#include <string>

#ifdef DebugV
#define debugV(a) std::cout << a;
#define debuglnV(a) std::cout << a << std::endl
#else
#define debugV(a)
#define debuglnV(a)
#endif

#ifdef DebugI
#define debugI(a) std::cout << a;
#define debuglnI(a) std::cout << a << std::endl
#else
#define debugI(a)
#define debuglnI(a)
#endif

#endif

#ifdef PLATFORMIO

#ifdef DebugV
#define debugV(a) (DebugSerial.print(a))
#define debuglnV(a) (DebugSerial.println(a))
#else
#define debugV(a)
#define debuglnV(a)
#endif

#ifdef DebugI
#define debugI(a) (DebugSerial.print(a))
#define debuglnI(a) (DebugSerial.println(a))
#else
#define debugI(a)
#define debuglnI(a)
#endif

#endif

#endif