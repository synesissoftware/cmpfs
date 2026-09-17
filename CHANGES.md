# cmpfs - Changes <!-- omit in toc -->


## Unreleased

* Applied **misc-dev-scripts** **0.6.0** editor/Git/`.sis` drop-in templates on **boilerplate**;
* Restored historical **.gitignore** patterns as a sorted union with **misc-dev-scripts** gold section layout;


## 0.0.1-alpha1 - 21st August 2026

* Created a Synesis-style **C** library skeleton: version macros, **CMake** packaging, **.sis** helper-script identity, modular GitHub Actions CI (**ci.yml** / **ci-cell.yml**), and install-smoke as a C consumer;
* Declared stub **`cmpfs_compare_binary_files()`** and **`cmpfs_compare_text_files()`** (currently **`ENOSYS`**);
* Added C example **example.c.1** and **xTests** unit coverage for version macros and the stub compare API;


<!-- ########################### end of file ########################### -->
