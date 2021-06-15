cmake_minimum_required (VERSION 3.5 FATAL_ERROR)

    set (PROJECT_NAME    001_HW_BinarySearch)
project (${PROJECT_NAME} LANGUAGES CXX)

    set (CMAKE_CXX_STANDARD           14)
    set (CMAKE_CXX_STANDARD_REQUIRED  ON)

add_executable (${PROJECT_NAME}
    src/array_handler.cpp     inc/array_handler.h
    src/main.cpp              inc/main.h
    src/menu.cpp              inc/menu.h
    src/search_binary.cpp     inc/search_binary.h
    src/sort_by_bubble.cpp    inc/sort_by_bubble.h
)
