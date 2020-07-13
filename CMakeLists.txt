cmake_minimum_required(VERSION 3.16)
project(esame_13072020_SimonePeroni)

set(CMAKE_CXX_STANDARD 14)

add_executable(esame_13072020_SimonePeroni
        main.cpp
        src/Vector3.cpp
        include/Vector3.h
        include/DamperBase.h
        src/Connector.cpp
        include/Connector.h
        src/PhysicBody.cpp
        include/PhysicBody.h
        src/Damper.cpp
        include/Damper.h src/Spring.cpp include/Spring.h src/PhysicSystem.cpp include/PhysicSystem.h include/SpringBase.h include/Applicable.h)

include_directories(include)