file (GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set (OUTPUT_NAME "boilerplate-test")

enable_testing()

add_executable ("BoilerPlateTest" ${SOURCES})

add_dependencies ("BoilerPlateTest" "BoilerPlate.Library")

set_target_properties ("BoilerPlateTest" PROPERTIES
        INCLUDE_DIRECTORIES      "${CMAKE_SOURCE_DIR}/Headers"
        LINK_DIRECTORIES         "${OUTPUT_DIR}"
        LINK_LIBRARIES           "gtest;gtest_main;boilerplate"
        LIBRARY_OUTPUT_NAME      "${OUTPUT_NAME}"
        ARCHIVE_OUTPUT_NAME      "${OUTPUT_NAME}"
        RUNTIME_OUTPUT_NAME      "${OUTPUT_NAME}"
        DEPENDENCIES             "BoilerPlate.Library"
)

include (GoogleTest)
gtest_discover_tests("BoilerPlateTest")