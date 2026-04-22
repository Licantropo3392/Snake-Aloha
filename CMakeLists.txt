cmake_minimum_required(VERSION 3.13) # Catnip requires >= 3.13

project(snake LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME}
    ${CMAKE_SOURCE_DIR}/src/main.cpp
)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib/Aloha)

target_link_libraries(${PROJECT_NAME} PRIVATE Aloha)