cmake_minimum_required(VERSION 3.5)
project(stb_image)

add_library(stb_image)
if(MSVC)
    set_property(TARGET stb_image PROPERTY MSVC_RUNTIME_LIBRARY "$<$<CONFIG:Debug>:MultiThreadedDebug>$<$<CONFIG:Release>:MultiThreaded>")
endif()
target_sources(stb_image PRIVATE "src/stb_image")
target_include_directories(stb_image PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")



