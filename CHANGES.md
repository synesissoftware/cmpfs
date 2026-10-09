# cmpfs - Changes <!-- omit in toc -->


## 0.0.1-alpha1 - 21st September 2026

* Created a Synesis-style **C** library skeleton: version macros, **CMake** packaging, **.sis** helper-script identity, modular GitHub Actions CI (**ci.yml** / **ci-cell.yml**), and install-smoke as a C consumer;
* Declared stub **`cmpfs_compare_binary_files()`** and **`cmpfs_compare_text_files()`** (currently **`ENOSYS`**);
* Added C example **example.c.1** and **xTests** unit coverage for version macros and the stub compare API;
* Applied **misc-dev-scripts** **0.6.0** editor/Git/`.sis` drop-in templates on **boilerplate**;
* Restored historical **.gitignore** patterns as a sorted union with **misc-dev-scripts** gold section layout;
* Modernised CMake helpers to the Phase 4b dialect (`SisClr_*` / `-A`, `sis_cmake_build`, no MinGW-from-`MSYSTEM`), retaining **`--stlsoft-root-dir`** in **prepare_cmake.sh**;
* Native Windows **`run_all_*.cmd`** runners (no Bash wrap); aggregate **`run_all_automated_tests.*`**; added **run_all_component_tests.sh** and **run_all_performance_tests.sh**;
* Renamed scratch versions reporter target to **test.scratch.versions** (formerly **versions**);


<!-- ########################### end of file ########################### -->
