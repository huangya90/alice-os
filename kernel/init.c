/*
 * Copyright (C) SilentAlice All rights reserved.
 * Author: SilentAlice <https://www.silentming.net>
 * Create:  Wed Jan 29 17:45:38 2020
 */
#include <alice/type.h>
#include <alice/compiler.h>

void init(pa_t kernel_load_address)
{
	asm volatile(".word 0xdeadbeef");
}