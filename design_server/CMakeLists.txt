cmake_minimum_required(VERSION 3.0)
project(design_server)

add_compile_options(-std=c++11)

find_package(Poco REQUIRED Foundation Net Redis)

include_directories(include)

aux_source_directory(src DIR_LIB_SRCS)

add_library(design_server ${DIR_LIB_SRCS})

add_executable(manager src/manager.cpp)
target_link_libraries(manager design_server PocoFoundation PocoNet PocoRedis)