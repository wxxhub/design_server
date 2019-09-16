cmake_minimum_required(VERSION 3.0)
project(design_server)

add_compile_options(-std=c++11)

find_package(Poco REQUIRED Foundation Net Redis)
find_package(Boost REQUIRED system )
find_package(Protobuf REQUIRED)

if (NOT Boost_FOUND)
    message("Not found Boost!")
endif()

include_directories(include message)

aux_source_directory(src/lib DIR_LIB_SRCS)

add_library(design_server ${DIR_LIB_SRCS})
add_library(message_lib message/login/login.pb.cc)

add_executable(manager src/manager.cpp)
target_link_libraries(manager
        design_server
        PocoFoundation
        PocoNet
        PocoRedis
        ${Boost_LIBRARIES}
        boost_thread
        ${PROTOBUF_LIBRARY}
        message_lib)