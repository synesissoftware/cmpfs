# cmpfs - FAQ <!-- omit in toc -->

The FAQ list is under (constant) development. If you post a question on the
Issues forum (https://github.com/synesissoftware/cmpfs/issues)
it will be used to create one.


## Table of Contents <!-- omit in toc -->

- [Q1: "How do I build cmpfs?"](#q1-how-do-i-build-cmpfs)
- [Q2: "How do I install cmpfs?"](#q2-how-do-i-install-cmpfs)
- [Q3: "How do I use cmpfs?"](#q3-how-do-i-use-cmpfs)
- [Q4: "Why do the compare functions return ENOSYS?"](#q4-why-do-the-compare-functions-return-enosys)


# FAQs: <!-- omit in toc -->

## Q1: "How do I build cmpfs?"

See [INSTALL.md](./INSTALL.md) for the recommended **CMake** flow
(**prepare_cmake.sh**, then **build_cmake.sh**).

For a minimal core-only build with no external dependencies:

```bash
$ ./prepare_cmake.sh --disable-testing --disable-examples -m
```

For a full build (including tests), install **STLSoft** 1.11 and **xTests**
first, then:

```bash
$ ./prepare_cmake.sh -m
```

Execute `$ ./prepare_cmake.sh --help` for the full set of options.


## Q2: "How do I install cmpfs?"

See [INSTALL.md](./INSTALL.md).


## Q3: "How do I use cmpfs?"

Include **cmpfs/cmpfs.h** and link against **libcmpfs** (the **CMake**
target is `cmpfs::core`).

Call `cmpfs_compare_binary_files()` or `cmpfs_compare_text_files()`. Paths
must be non-`NULL` (`assert`).


## Q4: "Why do the compare functions return ENOSYS?"

This release is a project skeleton. The public API, packaging, tests, and
CI are present so implementation can land without restructuring the tree.
Comparison currently returns `ENOSYS` until the binary/text algorithms are
filled in.


<!-- ########################### end of file ########################### -->
