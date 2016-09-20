include_directories("${CMAKE_SOURCE_DIR}/include")

add_library(game SHARED Game.cpp)
SET_TARGET_PROPERTIES(game
  PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${LIB_DIRECTORY}")

install_targets(/lib game)
