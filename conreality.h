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

cr_status crCreateContext(uint64_t version, uint64_t flags, cr_context* context);

cr_status crEnumerateDrivers(cr_context context, ...); // TODO: parameters

cr_status crEnumerateFeatures(cr_context context, ...); // TODO: parameters

cr_status crEnumerateModules(cr_context context, ...); // TODO: parameters

uint64_t crGetVersion();

const char* crGetVersionString();

bool crIsDriverLoaded(cr_context context, const char* id);

bool crIsFeatureEnabled(cr_context context, const char* id);

bool crIsModuleLoaded(cr_context context, const char* id);

cr_status crLoadDriver(cr_context context, const char* id);

cr_status crLoadModule(cr_context context, const char* id);

void crRegisterAllocatorCallbacks(cr_context context, void* (*realloc)(void*, size_t), void (*free)(void*));

void crRegisterErrorCallback(cr_context context, void (*)(cr_status, const char*));

cr_status crReleaseContext(cr_context* context);

#ifdef __cplusplus
} // extern "C"
#endif
