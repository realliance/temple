set(DIR ${CMAKE_CURRENT_LIST_DIR})
target_sources(temple
    PRIVATE
        "${DIR}/tile.h"
)
target_include_directories(temple PRIVATE "${temple_SOURCE_DIR}/include")