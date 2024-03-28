#include "util.hpp"

template<typename _Ty> void util::StructSet(_Ty* dest, _Ty val, size_t len) {
	if (dest == nullptr || len <= 0) return;

	//set memory
	for (size_t i = 0; i < len; i++)
		dest[i] = val;
}