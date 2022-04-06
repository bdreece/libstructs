# libstructs

![GitHub License](https://img.shields.io/github/license/bdreece/libstructs)
![GitHub Workflow Status](https://img.shields.io/github/workflow/status/bdreece/libstructs/CMake)
![GitHub release (latest by date including pre-releases)](https://img.shields.io/github/v/release/bdreece/libstructs?include_prereleases)

Cross-platform C99 implementation of classic data structures.

### Table of Contents

* [Overview](#overview)
* [Building](#building)
  * [Dependencies](#dependencies)
  * [Build Scripts](#build-scripts)
  * [Binaries](#binaries)
  * [Tests](#tests)
* [Usage](#usage)
* [Credits](#credits)
* [Future Plans](#future-plans)

---

### Overview

libstructs is a cross-platform implementation of classic data structures written in C99:

* Variable-length array
* Ring buffer
* Map (ordered / unordered)
* **TODO**:
  * Hashmap
  * Tree
  * Trie
  * Adjacency list graph
  * Perceptron

Structures are contained within their respective typedefs, and are queriable via relevant function calls. Data is stored on the heap and requires only the `stdlib.h` and `string.h` standard library headers.

### Building

##### Dependencies

Building this project requires the following dependencies:

* CMake (>= version 3.10)
* gcc (std=c99)
* binutils

Building and running tests for this project optionally requires the following dependencies:

* Boost.TEST
* CTest (bundled with CMake)

##### Build Configuration

Following standard CMake conventions, libstructs can be built using the following commands:

```
mkdir -p build && cd build
cmake ..
make
```

##### Binaries

After building the project, the library file, `libstructs.a`, is in the `build/src` directory.

##### Tests

After building the project, testing binaries will be located in the `build/tests/` subdirectory. These can be run either by invoking them directly, or by running `ctest` while in the testing directory.

### Usage

Documentation for this project has been generated by Doxygen and can be found on the [GitHub Pages](https://bdreece.github.io/libstructs/) for c-structs.

### Credits

Big thanks to me for dedicating time to this. Hopefully I find some use out of it.

### Future Plans

I would like to expand this library by adding more advanced data structures, now that the underlying structures have been implemented. Also iterators are cool.
