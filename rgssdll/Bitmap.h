#pragma once

#include <Windows.h>
class Bitmap
{
public:

	Bitmap(const DWORD object_id)
	{
		m_pixel = ((DWORD****)(object_id << 1))[4][2][4];
		m_size = ((DWORD****)(object_id << 1))[4][2][2];
	}

	~Bitmap()
	{
	}

	DWORD width()  const { return m_size[1]; }
	DWORD height() const { return m_size[2]; }

	DWORD* pixel(const int x, const int y) const { return m_pixel + (height() - y - 1) * width() + x; }

	DWORD* begin() const { return m_pixel; }
	DWORD* end() const { return m_pixel + width() * height(); }

private:
	DWORD* m_size;
	DWORD* m_pixel;
};

