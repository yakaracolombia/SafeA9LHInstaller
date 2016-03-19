/*
*   fs.h
*/

#pragma once

#include "types.h"

u32 mountSD(void);
u32 fileRead(u8 *dest, const char *path, u32 size);
u32 fileSize(const char *path);