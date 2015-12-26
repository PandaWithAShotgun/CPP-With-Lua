//
//  main.cpp
//  letsTryThisAgain
//
//  Created by Jon Dicks on 12/25/15.
//  Copyright © 2015 Jon Dicks. All rights reserved.
//

#include <iostream>
#include "impLua.h"

static void *l_alloc (void *ptr, size_t osize, size_t nsize){
    void *ud;
    if (nsize == 0){
        free(ptr);
        return NULL;
    }
    else return realloc(ptr, nsize);
}



int main(int argc, const char * argv[]) {
    lua_State *lua = lua_newstate(l_alloc(), ud);
    return 0;
}
