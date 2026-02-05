project(OnlineLibraryManagementSystem)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

file(GLOB SOURCES
    src/*.cpp
)

add_executable(OnlineLibraryManagementSystem ${SOURCES})

enable_testing()

file(GLOB TEST_SOURCES
    tests/*.cpp
)

add_executable(OnlineLibraryManagementSystemTests ${TEST_SOURCES})
target_link_libraries(OnlineLibraryManagementSystemTests gtest gtest_main)
add_test(NAME OnlineLibraryManagementSystemTests COMMAND OnlineLibraryManagementSystemTests)