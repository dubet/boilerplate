cmake_minimum_required (VERSION 3.22)
project ("BoilerPlate")

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR})
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

# Executables
add_subdirectory ("Sources/BoilerPlate/Executable")

# Libraries
add_subdirectory ("Sources/BoilerPlate/Library")

# Benchmarks
add_subdirectory ("Benchmarks/BoilerPlate")

# Tests
enable_testing()
add_subdirectory ("Tests/BoilerPlate")
