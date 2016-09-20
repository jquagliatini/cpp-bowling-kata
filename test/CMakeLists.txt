include_directories("${CMAKE_SOURCE_DIR}/include")

add_executable(mainTest mainTest.cpp GameTest.cpp)

SET_TARGET_PROPERTIES(mainTest
  PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIRECTORY}")

ADD_CUSTOM_COMMAND(TARGET mainTest POST_BUILD
  COMMAND "${OUTPUT_DIRECTORY}/mainTest")

ADD_CUSTOM_TARGET(tests "${OUTPUT_DIRECTORY}/mainTest" DEPENDS mainTest
  COMMENT "Runnint CPPUnit tests ...")

target_link_libraries(mainTest game cppunit)
install_programs(/bin FILES mainTest)
