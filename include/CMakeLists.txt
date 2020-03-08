add_subdirectory(entities)
add_subdirectory(tiles)
add_subdirectory(states)

set(DIR ${CMAKE_CURRENT_LIST_DIR})
target_sources(temple
    PRIVATE
        "${DIR}/temple.h"
        "${DIR}/palettes.h"
)
target_include_directories(temple PRIVATE "${temple_SOURCE_DIR}/include")
