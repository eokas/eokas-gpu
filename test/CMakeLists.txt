cmake_minimum_required(VERSION 3.20)

# set the project name and version
project(eokas-gpu-test VERSION 1.0)


message("project name: " ${PROJECT_NAME})
message("project source dir: " ..)
message("project binary dir: " ${PROJECT_BINARY_DIR})

include_directories(
        ../cmake-install/include
        ../deps/eokas-base/include
        $ENV{VK_SDK_PATH}/include
        $ENV{GLFW_SDK_PATH}/include
)
link_directories(
        ../cmake-install/lib/${CMAKE_BUILD_TYPE}
        ../deps/eokas-base/lib/${CMAKE_BUILD_TYPE}
        $ENV{VK_SDK_PATH}/Lib
        $ENV{GLFW_SDK_PATH}/lib-vc2019
)
set(LIBS eokas-base eokas-gpu vulkan-1 glfw3)

message("GLFW_SDK_PATH: "$ENV{GLFW_SDK_PATH})

add_executable(001-glfw 001-glfw/main.cpp)
target_link_libraries(001-glfw ${LIBS})

install(
    TARGETS
        001-glfw
    DESTINATION
        ${CMAKE_BUILD_TYPE}
)
