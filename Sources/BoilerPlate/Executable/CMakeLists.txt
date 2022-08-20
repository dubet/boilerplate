file (GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set (OUTPUT_NAME "boilerplate")

add_executable ("BoilerPlate.Executable" ${SOURCES})

add_dependencies ("BoilerPlate.Executable" "BoilerPlate.Library")

set_target_properties ("BoilerPlate.Executable" PROPERTIES
        INCLUDE_DIRECTORIES      "${CMAKE_SOURCE_DIR}/Headers"
        LINK_DIRECTORIES         "${OUTPUT_DIR}"
        LINK_LIBRARIES           "boilerplate"
        COMPILE_OPTIONS          ""
        LIBRARY_OUTPUT_NAME      "${OUTPUT_NAME}"
        ARCHIVE_OUTPUT_NAME      "${OUTPUT_NAME}"
        RUNTIME_OUTPUT_NAME      "${OUTPUT_NAME}"
        DEPENDENCIES             "BoilerPlate.Library"
)