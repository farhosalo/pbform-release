cmake_minimum_required(VERSION 3.21)
project(my_app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Protobuf CONFIG REQUIRED)

add_executable(my_app
    main.cpp
    gen/person.pb.cc
    gen/person.qtform.cpp
)

target_include_directories(my_app PRIVATE gen)
target_link_libraries(my_app PRIVATE Qt6::Widgets protobuf::libprotobuf)
