#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "library_private.h"
#include "callback.h"
#include "librarian.h"
#include "box64context.h"

const char* libxcbglxName = "libxcb-glx.so.0";
#define LIBNAME libxcbglx

#include "wrappedlib_init.h"
