
aux_source_directory(${CMAKE_SOURCE_DIR} SRC)

message(status ${SRC})

add_library(core
        STATIC
        ${SRC})