# cmpfs <!-- omit in toc -->

**Com**pare **F**ile-**S**ystem entities, for **C** and **C++**

![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)
[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![GitHub release](https://img.shields.io/github/v/release/synesissoftware/cmpfs.svg)](https://github.com/synesissoftware/cmpfs/releases/latest)
[![Last Commit](https://img.shields.io/github/last-commit/synesissoftware/cmpfs)](https://github.com/synesissoftware/cmpfs/commits/master)
[![CI](https://github.com/synesissoftware/cmpfs/actions/workflows/ci.yml/badge.svg)](https://github.com/synesissoftware/cmpfs/actions/workflows/ci.yml)


## Table of Contents <!-- omit in toc -->

- [Introduction](#introduction)
  - [Dependencies](#dependencies)
- [Installation](#installation)
- [Components](#components)
  - [C API / core library](#c-api--core-library)
- [Examples](#examples)
- [Project Information](#project-information)
  - [Where to get help](#where-to-get-help)
  - [Contribution guidelines](#contribution-guidelines)
  - [Dependencies](#dependencies-1)
    - [Development dependencies](#development-dependencies)
  - [Related projects](#related-projects)
  - [License](#license)


## Introduction

**cmpfs** is a compiled **C** library for platform-independent comparison of file-system entities, including binary and text file contents.

This tree is a **skeleton**: version macros, CMake packaging, helper scripts, CI, an example, and unit tests are in place. The comparison functions currently return `ENOSYS` until the algorithm is implemented.

The core library has **no dependencies** on any other non-standard library.


### Dependencies

| Component    | Implemented in | Use in                        | Dependencies |
| ------------ | -------------- | ----------------------------- | ------------ |
| Core library | C              | C — via **cmpfs/cmpfs.h**     | C standard library |
| Examples (C) | C              | —                             | — |
| Tests (C)    | C              | —                             | [STLSoft](https://github.com/synesissoftware/STLSoft/), [xTests](https://github.com/synesissoftware/xTests/) |


## Installation

Detailed instructions — via **CMake**, via bundling — are provided in the accompanying [INSTALL.md](./INSTALL.md) file.


## Components

### C API / core library

```C
int
cmpfs_compare_binary_files(
    char const*                 path1
,   char const*                 path2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
);

int
cmpfs_compare_text_files(
    char const*                 path1
,   char const*                 path2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
);
```

Text flags include `CMPFS_F_NONE`, `CMPFS_F_TRIM_LINES`, and `CMPFS_F_SKIP_BLANK_LINES`. Both functions currently return `ENOSYS`.


## Examples

Examples are provided in the `examples` directory.


## Project Information


### Where to get help

[GitHub Page](https://github.com/synesissoftware/cmpfs)


### Contribution guidelines

Defect reports, feature requests, and pull requests are welcome on https://github.com/synesissoftware/cmpfs.


### Dependencies

* none for the core library;


#### Development dependencies

* [STLSoft](https://github.com/synesissoftware/STLSoft/);
* [xTests](https://github.com/synesissoftware/xTests/);


### Related projects

* [cmpfs.Ruby](https://github.com/synesissoftware/cmpfs.Ruby);


### License

**cmpfs** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->
