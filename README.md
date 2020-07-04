# Conreality Software Development Kit (SDK) for C

[![Project license](https://img.shields.io/badge/license-Public%20Domain-blue.svg)](https://unlicense.org)
[![C compatibility](https://img.shields.io/badge/c-C11%20%7C%20C18%20%7C%20C2x-blue)](#)
[![Continuous integration](https://github.com/conreality/conreality.c/workflows/Continuous%20integration/badge.svg)](https://github.com/conreality/conreality.c/actions?query=workflow%3A%22Continuous+integration%22)

## Installation

```bash
$ git clone https://github.com/conreality/conreality.c.git

$ cd conreality.c

$ sudo make install
```

## Prerequisites

- [C11][] compiler (for example, [Clang][] 3.1+ or [GCC][] 4.6+)
- [Conreality SDK][] binaries (shared library or static library)

[C11]:            https://en.wikipedia.org/wiki/C11_(C_standard_revision)
[Clang]:          https://clang.llvm.org
[GCC]:            https://gcc.gnu.org
[Conreality SDK]: https://github.com/conreality/conreality-sdk

## Examples

### Including the header file

```c
#include <conreality.h>
```

### Checking the library version

### Initializing the library

### Miscellaneous examples

## Reference

### Constants

#### `CR_VERSION_MAJOR`

#### `CR_VERSION_MINOR`

#### `CR_VERSION_PATCH`

#### `CR_VERSION_BUILD`

### Enums

#### `cr_status`

### Structs

#### `cr_context`

### Functions

#### `crCreateContext`

#### `crEnumerateDrivers`

#### `crEnumerateFeatures`

#### `crEnumerateModules`

#### `crGetVersion`

#### `crGetVersionString`

#### `crIsDriverLoaded`

#### `crIsFeatureEnabled`

#### `crIsModuleLoaded`

#### `crLoadDriver`

#### `crLoadModule`

#### `crRegisterAllocatorCallbacks`

#### `crRegisterErrorCallback`

#### `crReleaseContext`

## See Also

- [Conreality SDK for C++](https://github.com/conreality/conreality.cpp)
