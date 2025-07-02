# repolib_app

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Open Source](https://badges.frapsoft.com/os/v1/open-source.svg)
![Made with VSCode](https://img.shields.io/badge/Made%20with-VSCode-1f425f.svg)

## Table of Contents

- [Introduction](#introduction)
- [Overview](#overview)
- [Directory Structure](#directory-structure)
- [Application Description](#application-description)
- [Build Instructions](#build-instructions)
  - [Prerequisites](#prerequisites)
  - [Steps](#steps)
  - [Notes](#notes)
- [License](#license)

## Introduction

**repolib_app** is a demonstration project showcasing how to perform basic arithmetic operations using 32-bit integers in C. It is designed as a simple example for learning how to structure a C project, use external libraries, and build applications using CMake. The project leverages the `repolib` library to perform arithmetic operations and provides a clear, modular directory structure suitable for further extension.

## Overview

**repolib_app** is a simple C application that demonstrates basic arithmetic operations (addition, subtraction, multiplication, division) using 32-bit integers. The application utilizes functions provided by the external `repolib` library.

## Directory Structure

```
.
├── build/                # Build output directory (created by CMake)
├── CMakelists.txt        # CMake build configuration file
├── inc/                  # (Optional) Directory for additional headers
├── log/                  # Log files for build and application runs
│   ├── app.log
│   ├── build_run.log
│   ├── cmake.log
│   └── make.log
├── README.md             # Project documentation (this file)
└── src/
    └── main.c            # Main application source code
```

## Application Description

The main application ([src/main.c](src/main.c)) performs the following:

- Initializes two 32-bit integers (`a` and `b`)
- Uses the `repolib` library to perform:
  - Addition (`arith32_add`)
  - Subtraction (`arith32_subtract`)
  - Multiplication (`arith32_multiply`)
  - Division (`arith32_divide`)
- Prints the results to the console

**Sample Output:**
```
Addition: 20 + 5 = 25
Subtraction: 20 - 5 = 15
Multiplication: 20 * 5 = 100
Division: 20 / 5 = 4
```

## Build Instructions

### Prerequisites

- C compiler (e.g., GCC)
- [CMake](https://cmake.org/) (version 3.10 or higher)
- `repolib` library installed (headers in `/usr/local/include` and library in `/usr/local/lib` by default)

### Steps

1. **Clone or download the repository.**

2. **Create a build directory and navigate into it:**
   ```sh
   mkdir build
   cd build
   ```

3. **Run CMake to configure the project:**
   ```sh
   cmake -S ..
   ```

4. **Build the executable:**
   ```sh
   make
   ```

5. **Run the application:**
   ```sh
   ./repolib_app
   ```

### Notes

- If `repolib` is installed in a custom location, set the following variables when running CMake:
  ```sh
  cmake -DREPOLIB_INCLUDE_DIR=/path/to/include -DREPOLIB_LIB_DIR=/path/to/lib -S ..
  ```

- Log files for builds and runs are stored in the `log/` directory.

## License

This project uses the MIT License.

---

Author: Shubhendra Pratap Singh

[contact me](mailto:shubhendrasingh09@gmail.com)