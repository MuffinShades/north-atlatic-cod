#pragma once
#include <iostream>
#include <windows.h>


//types use these if you want idc
#define byte unsigned char
#define i8 char
#define u8 char
#define i16 short
#define u16 unsigned short
#define i32 int
#define u32 unsigned int
#define i64 long
#define u64 unsigned long
#define f32 float
#define f64 float

//dont add extern C linkage to these classes
class util {
	template<typename _Ty> static void StructSet(_Ty* dest, _Ty val, size_t len);
};