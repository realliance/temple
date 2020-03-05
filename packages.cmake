include(FetchContent)

FetchContent_Declare(
  sfml
  GIT_REPOSITORY https://github.com/SFML/SFML.git
  GIT_TAG        2.5.1
)

FetchContent_Declare(
  box2d
  GIT_REPOSITORY https://github.com/erincatto/box2d.git
  GIT_TAG        v2.3.1
)

FetchContent_Declare(
  toml
  GIT_REPOSITORY https://github.com/ToruNiina/toml11
  GIT_TAG        v3.3.1
)

set(SFML_BUILD_NETWORK OFF)
FetchContent_MakeAvailable(sfml)
FetchContent_MakeAvailable(box2d)

set(toml11_BUILD_TEST OFF)
FetchContent_MakeAvailable(toml)