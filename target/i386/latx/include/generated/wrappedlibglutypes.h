#ifndef __wrappedlibgluTYPES_H_
#define __wrappedlibgluTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef void (*vFpip_t)(void*, int32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(gluNurbsCallback, vFpip_t) \
	GO(gluQuadricCallback, vFpip_t) \
	GO(gluTessCallback, vFpip_t)

#endif // __wrappedlibgluTYPES_H_
