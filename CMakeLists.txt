# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.13)
message(${CMAKE_VERSION})

project ("egaf")

set(API "Vulkan" CACHE STRING "Which API to use, options only include 'Vulkan' currently, which is the default")

if(${API} STREQUAL "Vulkan")
	set(API_VULKAN true)
	message ("Using Vulkan")
endif()

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY  "${CMAKE_CURRENT_BINARY_DIR}/lib")

option(BUILD_SHARED_LIBS "Build using shared libraries" OFF)

set(GLFW_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/external/glfw/include")
set(STB_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/external/stb")

add_subdirectory(${PROJECT_SOURCE_DIR}/external/glfw)

add_subdirectory (src)
