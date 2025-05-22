# Automobile Maintenance Library

## Description
The Automobile Maintenance Library is a C++ project designed to provide a comprehensive set of classes and functionalities to model and manage maintenance tasks for different types of automobiles, including gas, diesel, and electric cars. The library aims to facilitate the tracking and execution of maintenance operations for various vehicle types.

## Features
- Object-oriented design with support for multiple automobile types (Gas, Diesel, Electric)
- Maintenance task management and scheduling
- Modular codebase with clear separation of interface and implementation
- Build system configured with CMake for easy compilation and integration

## Build Instructions
This project uses CMake as its build system. Follow the steps below to build the project:

1. Ensure you have CMake and a C++ compiler installed on your system.
2. Clone the repository:
   ```
   git clone <[repository-url](https://github.com/A1MMA1R11/AutomobileMaintenanceLibrary.git)>
   cd AutomobileMaintenanceLibrary
   ```
3. Create a build directory and navigate into it:
   ```
   mkdir build
   cd build
   ```
4. Generate the build files using CMake:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   cmake --build .
   ```
6. The executable will be generated in the `bin` directory (if configured).

## Usage
Run the compiled executable from the `bin` directory. The main entry point is `main.cpp`, which demonstrates usage of the library.

## Directory Structure
- `include/` - Header files for the library classes and interfaces
- `src/` - Source files implementing the library functionality
- `build/` - Build directory for CMake-generated files and compiled objects
- `bin/` - Output directory for compiled executables
- `CMakeLists.txt` - CMake build configuration files
- `main.cpp` - Main program demonstrating the library usage

## Dependencies
- C++11 or later
- CMake 3.10 or later
- Compatible C++ compiler (e.g., GCC, Clang, MSVC)

## License
This project is licensed under the MIT License. See the LICENSE file for details.
