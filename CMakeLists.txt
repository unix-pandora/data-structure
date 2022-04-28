cmake_minimum_required(VERSION 3.19)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

add_executable(data_structure main.c
        src/main/SingleLink/SingleLinkList.c
        src/main/SingleLink/SingleLinkList2.c
        src/header/pub/public.h
        src/header/distribution/func.h
        src/main/SingleLink/SingleLinkedDemo3.c)