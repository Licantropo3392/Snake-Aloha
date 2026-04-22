cmake_minimum_required(VERSION 3.13) # Catnip requires >= 3.13

project(Snake-Aloha LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME}
    ${CMAKE_SOURCE_DIR}/src/main.cpp
)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib/Aloha)

target_link_libraries(${PROJECT_NAME} PRIVATE Aloha)

if(NINTENDO_3DS)
    # Generate a SMDH file for the executable
    ctr_generate_smdh(${PROJECT_NAME}.smdh
        NAME        "${PROJECT_NAME}"
        # DESCRIPTION "LÖVE for 3DS • ${APP_VERSION}"
        # AUTHOR      "${APP_AUTHOR}"
        # ICON        ${APP_ICON}
    )

    # Specify that the executable is a 3DSX file
    ctr_create_3dsx(${PROJECT_NAME}
        SMDH  ${PROJECT_NAME}.smdh
        # ROMFS ${CMAKE_SOURCE_DIR}/romfs
    )

    # target_include_directories(${PROJECT_NAME} PRIVATE ${DEVKITPRO}/libctru/include)
    # target_link_directories(${PROJECT_NAME} PRIVATE ${DEVKITPRO}/libctru/lib)
endif()