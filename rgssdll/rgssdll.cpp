
#include "rgssdll.h"
#include "Bitmap.h"

RGSSDLL_API int bitmap_xor(const DWORD object_id, const DWORD color)
{
	Bitmap bmp(object_id);
	for (DWORD& pixel : bmp)
	{
		pixel ^= color;
	}
	return 0;
}

RGSSDLL_API int bitmap_or(const DWORD object_id, const DWORD color)
{
	Bitmap bmp(object_id);
	for (DWORD& pixel : bmp)
	{
		pixel |= color;
	}
	return 0;
}

RGSSDLL_API int bitmap_and(const DWORD object_id, const DWORD color)
{
	Bitmap bmp(object_id);
	for (DWORD& pixel : bmp)
	{
		pixel &= color;
	}
	return 0;
}
