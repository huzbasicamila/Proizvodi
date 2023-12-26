cmake_minimum_required(VERSION 3.26)
project(Proizvodi)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proizvodi main.cpp
        Proizvod.h
        Proizvod.cpp
        ProizvodPopust.cpp
        ProizvodPopust.h
        ProizvodPopust.h
        ProizvodVeleprodaja.cpp
        ProizvodVeleprodaja.h
        ProizvodVeleprodaja.h
        Kontejner.cpp
        Kontejner.h
        Kontejner.h)
