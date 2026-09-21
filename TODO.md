# cmpfs - TODO <!-- omit in toc -->


## Functional improvements


### High

* [ ] Implement **`cmpfs_compare_binary_files()`**;
* [ ] Implement **`cmpfs_compare_text_files()`** with **`CMPFS_TEXT_F_TRIM_LINES`** and **`CMPFS_TEXT_F_SKIP_BLANK_LINES`**;
* [ ] Provide **`cmpfs_compare_binary_streams()`** and **`cmpfs_compare_text_streams()`**;
* [ ] Document (and enforce in tests) that **`cmpfs_comparison_result_t::result`** is an ordering relation, and is meaningful **only** when the API function returns **0**; any other return value means the comparison did not produce a result;


### Medium

* [ ] Add a text-only left-strip flag;
* [ ] Add a text-only right-strip flag;
* [ ] Add a text-only strip flag as the bit combination of left-strip and right-strip;
* [ ] Allow file/stream text encodings to be specified separately (per operand);
* [ ] Complete **`cmpfs_comparison_result_t`** field semantics (items read, difference offsets, line/column for text);


### Low

* [ ] Recover behaviour from the historical Hautacam **cmpfs** C API and reconcile with **cmpfs.Ruby**;


### Enhancements

* [ ] C++ façade over the C API;
* [ ] Asynchronous comparison of large files;
* [ ] Callback functions for binary chunk comparison;
* [ ] Callback functions for text line(s) comparison;


## Performance improvements

* [ ] Multi-threaded comparison of large files;
* [ ] **`readv()`** / **`writev()`** compatibility for binary comparison (**`iovec[]`**);


## Packaging improvements

* [ ] Defer rewriting helper `MSYSTEM` → `mingw32-make` / MinGW-generator detection until the **HELPER-SCRIPTS-C-CXX.md** contract is frozen (same defect class as other Synesis C/C++ helpers);


<!-- ########################### end of file ########################### -->
