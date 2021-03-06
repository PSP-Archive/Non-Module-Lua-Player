/*
 * PSP Software Development Kit - http://www.pspdev.org
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in PSPSDK root for details.
 *
 * main.c - Simple LRX example.
 *
 * Copyright (c) 2005 David Ryan <oobles@hotmail.com>
 *
 * $Id: main.c 1531 2005-12-07 18:27:12Z tyranid $
 */
#include <stdlib.h>
#include <pspkernel.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include "luamodule.h"

PSP_MODULE_INFO("simple", 0, 1, 1);
PSP_HEAP_SIZE_KB(240);
PSP_NO_CREATE_MAIN_THREAD(); 

#define WELCOME_MESSAGE "Simple LRX loaded"


static int lua_doSomething(lua_State *L)
{
	if (lua_gettop(L) != 0) return luaL_error(L, "wrong number of arguments");
	lua_pushstring(L, WELCOME_MESSAGE );
	return 1;
}

static const luaL_reg Simple_functions[] = {
  {"doSomething",	lua_doSomething},
  {0,0}
};


int init(lua_State *L )
{
	luaL_openlib(L, "Simple", Simple_functions, 0);
	return 0;
}

int main(int argc, char *argv[] )
{
	return 0;
}

