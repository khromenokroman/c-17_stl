cmake_minimum_required(VERSION 3.5)

project(book_stl17-1)

add_executable(book_stl17-1 
    01-2.cpp
)

set_target_properties(book_stl17-1 PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)