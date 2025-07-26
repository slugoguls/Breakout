cmake_minimum_required(VERSION 3.5)
project(stb_truetype)

add_library(stb_truetype)
if(MSVC)
    set_property(TARGET stb_truetype PROPERTY MSVC_RUNTIME_LIBRARY "$<$<CONFIG:Debug>:MultiThreadedDebug>$<$<CONFIG:Release>:MultiThreaded>")
endif()
target_sources(stb_truetype PRIVATE "src/stb_truetype")
target_include_directories(stb_truetype PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")

