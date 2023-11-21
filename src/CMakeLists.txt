cmake_minimum_required(VERSION 3.14)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(UniPrint)
add_subdirectory(random)
add_subdirectory(reverse)

#add_subdirectory(list)
add_subdirectory(sum)
