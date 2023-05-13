add_executable(add add.cpp)
add_executable(add_item add_item.cpp)
add_executable(comments comments.cpp)
target_include_directories(add_item PRIVATE ${CMAKE_SOURCE_DIR})