cmake_minimum_required(VERSION 3.23)
project(tp_03_v2 C)

set(CMAKE_C_STANDARD 99)

add_executable(
    tp_03_v2
    main.c
    ./headers/linha.h
    ./src/linha.c
    ./headers/palavra.h
    ./src/palavra.c
    ./headers/dicionario.h
    ./src/dicionario.c
)
