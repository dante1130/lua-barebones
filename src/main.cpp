#include <iostream>

extern "C" {
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>
}

#include <LuaBridge/LuaBridge.h>

int main() {
	lua_State* lua_state = luaL_newstate();
	
	return 0;
}
