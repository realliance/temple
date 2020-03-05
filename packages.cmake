include(FetchContent)

FetchContent_Declare(
  sfml
  GIT_REPOSITORY https://github.com/SFML/SFML.git
  GIT_TAG        2.5.1
)

FetchContent_Declare(
  box2d
  GIT_REPOSITORY https://github.com/erincatto/box2d.git
  GIT_TAG        c947761815c00fdbc646b7bb1c1b32fd5830eb11
)

FetchContent_Declare(
  toml
  GIT_REPOSITORY https://github.com/ToruNiina/toml11.git
  GIT_TAG        a20a2c0b80be95190635c20f9e52394637a7e42e
)

option(SFML_BUILD_NETWORK OFF)
FetchContent_MakeAvailable(sfml)

option (BOX2D_BUILD_UNIT_TESTS OFF)
option (BOX2D_BUILD_DOCS OFF)
option (BOX2D_BUILD_TESTBED OFF)
FetchContent_MakeAvailable(box2d)

FetchContent_GetProperties(toml)
if(NOT toml_POPULATED)
  FetchContent_Populate(toml)
  include_directories(${toml_SOURCE_DIR})
endif()