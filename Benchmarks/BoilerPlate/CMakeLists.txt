file (GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set (OUTPUT_NAME "boilerplate-benchmark")

add_executable ("BoilerPlate.Benchmark" ${SOURCES})

add_dependencies ("BoilerPlate.Benchmark" "BoilerPlate.Library")

set_target_properties ("BoilerPlate.Benchmark" PROPERTIES
        INCLUDE_DIRECTORIES      "${CMAKE_SOURCE_DIR}/Headers"
        LINK_DIRECTORIES         "${OUTPUT_DIR}"
        LINK_LIBRARIES           "benchmark;benchmark_main;boilerplate"
        LIBRARY_OUTPUT_NAME      "${OUTPUT_NAME}"
        ARCHIVE_OUTPUT_NAME      "${OUTPUT_NAME}"
        RUNTIME_OUTPUT_NAME      "${OUTPUT_NAME}"
        DEPENDENCIES             "BoilerPlate.Library"
)