cmake_minimum_required(VERSION 3.10)
project(My_DSA_Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(dsa_app 
    main.cpp 
    Dsa_Tasks/Linear_Search.cpp
    OOP_Tasks/errors.cpp
    OOP_Tasks/array.cpp
    OOP_Tasks/employee.cpp
    OOP_Tasks/employee.h
    OOP_Tasks/containers.h
    OOP_Tasks/containers.cpp
    Dsa_Tasks/queue.h
    Dsa_Tasks/queue.cpp
)

