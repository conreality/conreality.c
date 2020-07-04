// This is free and unencumbered software released into the public domain.

#pragma once

/**
 * @file
 *
 * Conreality Software Development Kit (SDK) for C.
 *
 * @see https://github.com/conreality/conreality.c
 */

#ifndef __cplusplus
#if __STDC_VERSION__ < 201103L
#error "<conreality.h> requires a C11 or newer compiler (CFLAGS='-std=c11')"
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h> // for bool
#include <stddef.h>  // for size_t
#include <stdint.h>  // for {u,}int*_t

enum {
  CR_VERSION_MAJOR = 20,
  CR_VERSION_MINOR = 0,
  CR_VERSION_PATCH = 0,
  CR_VERSION_BUILD = 0,
};

typedef enum {
  CR_FAILURE = -1,
  CR_SUCCESS = 0,
} cr_status;

typedef struct _cr_context* cr_context;

cr_status aiCreateContext(uint64_t version, uint64_t flags, cr_context* context);

cr_status aiEnumerateDrivers(cr_context context, ...); // TODO: parameters

cr_status aiEnumerateFeatures(cr_context context, ...); // TODO: parameters

cr_status aiEnumerateModules(cr_context context, ...); // TODO: parameters

uint64_t aiGetVersion();

const char* aiGetVersionString();

bool aiIsDriverLoaded(cr_context context, const char* id);

bool aiIsFeatureEnabled(cr_context context, const char* id);

bool aiIsModuleLoaded(cr_context context, const char* id);

cr_status aiLoadDriver(cr_context context, const char* id);

cr_status aiLoadModule(cr_context context, const char* id);

void aiRegisterAllocatorCallbacks(cr_context context, void* (*realloc)(void*, size_t), void (*free)(void*));

void aiRegisterErrorCallback(cr_context context, void (*)(cr_status, const char*));

cr_status aiReleaseContext(cr_context* context);

#ifdef __cplusplus
} // extern "C"
#endif
