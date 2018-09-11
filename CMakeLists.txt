cmake_minimum_required(VERSION 3.9)
project(APT)

set(CMAKE_CXX_STANDARD 17)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_executable(APT main.cpp stb_image.h stb_image.cpp)

# GLFW
find_package(glfw3 REQUIRED)
include_directories(${GLFW_INCLUDE_DIRS})
link_libraries(${GLFW_LIBRARY_DIRS})

# OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

# GLEW
find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})

## SOIL2
#include_directories(SOIL2)
#add_library (SOIL2 STATIC
#        SOIL2/etc1_utils.c
#        SOIL2/etc1_utils.h
#        SOIL2/image_DXT.c
#        SOIL2/image_DXT.h
#        SOIL2/image_helper.c
#        SOIL2/image_helper.h
#        SOIL2/jo_jpeg.h
#        SOIL2/pkm_helper.h
#        SOIL2/pvr_helper.h
#        SOIL2/SOIL2.h
#        SOIL2/SOIL2.c
#        SOIL2/stb_image_write.h
#        SOIL2/stb_image.h
#        SOIL2/stbi_DDS_c.h
#        SOIL2/stbi_DDS.h
#        SOIL2/stbi_ext.h
#        SOIL2/stbi_ext_c.h
#        SOIL2/stbi_pkm.h
#        SOIL2/stbi_pkm_c.h
#        SOIL2/stbi_pvr.h
#        SOIL2/stbi_pvr_c.h)

# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Tesseract
include_directories (/usr/local/include/tesseract)
link_directories (/usr/local/lib)

target_link_libraries(
        APT
        glfw
        ${OPENGL_LIBRARIES}
        ${GLEW_LIBRARIES}
#        SOIL2
        lept tesseract
        ${OpenCV_LIBS}
        ${EXTRA_LIBS}
)