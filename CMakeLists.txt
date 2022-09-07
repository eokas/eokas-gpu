cmake_minimum_required(VERSION 3.20)

# set the project name and version
project(eokas-gpu VERSION 1.0)

# specify the C++ standard and options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

message("project name: " ${PROJECT_NAME})
message("project source dir: " ${PROJECT_SOURCE_DIR})
message("project binary dir: " ${PROJECT_BINARY_DIR})

include_directories(
        src
        deps/eokas-base/include
        $ENV{VK_SDK_PATH}/include
        $ENV{GLFW_SDK_PATH}/include
)
link_directories(
        deps/eokas-base/lib/${CMAKE_BUILD_TYPE}
        $ENV{VK_SDK_PATH}/Lib
        $ENV{GLFW_SDK_PATH}/lib-vc2019
)
set(LIBS eokas-base vulkan-1 glfw3)

aux_source_directory(src/core SRC_CORE)
aux_source_directory(src/d3d12 SRC_D3D12)
aux_source_directory(src/vulkan SRC_VULKAN)
aux_source_directory(src/metal SRC_METAL)

file(GLOB HEADER_FILES "src/core/*.h")
message("headers " ${HEADER_FILES})

add_library(${PROJECT_NAME} STATIC ${SRC_CORE} ${SRC_D3D12} ${SRC_VULKAN} ${SRC_METAL})
target_link_libraries(${PROJECT_NAME} ${LIBS})

install(TARGETS ${PROJECT_NAME} DESTINATION lib/${CMAKE_BUILD_TYPE})
install(FILES ${HEADER_FILES} DESTINATION include)
