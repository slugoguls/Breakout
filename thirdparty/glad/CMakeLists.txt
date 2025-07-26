cmake_minimum_required(VERSION 3.5)
project(glad)

add_library(glad)
if(MSVC)
    set_property(TARGET glad PROPERTY MSVC_RUNTIME_LIBRARY "$<$<CONFIG:Debug>:MultiThreadedDebug>$<$<CONFIG:Release>:MultiThreaded>")
endif()
target_sources(glad PRIVATE src/glad.c)
target_include_directories(glad PUBLIC include)