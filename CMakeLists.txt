cmake_minimum_required(VERSION 3.10)
project(repolib_app C)

set(CMAKE_C_STANDARD 11)

# Use pkg-config to locate repolib
find_package(PkgConfig REQUIRED)
pkg_check_modules(REPOLIB REQUIRED repolib)

include_directories(${REPOLIB_INCLUDE_DIRS})
link_directories(${REPOLIB_LIBRARY_DIRS})

add_executable(repolib_app src/main.c)
target_link_libraries(repolib_app ${REPOLIB_LIBRARIES})

# Let CMake install to /usr/bin
install(TARGETS repolib_app DESTINATION bin)
