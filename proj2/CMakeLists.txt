
project(proj2)

find_package(fmt)

add_executable(proj2 proj2.cpp)

target_include_directories(proj2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../proj1)

target_link_directories(proj2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../proj1/build)

target_link_libraries(proj2 PRIVATE proj1)

target_link_libraries(proj2 fmt::fmt)
