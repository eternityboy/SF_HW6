cmake_minimum_required(VERSION 3.24)
project(deviceShop)

set(CMAKE_CXX_STANDARD 17)

add_executable(
deviceShop
main.cpp
source/Devices.cpp
source/Devices.h
source/Appliances.cpp
source/Appliances.h
source/IElectronics.h
source/Players.cpp
source/Players.h
source/Computers.cpp
source/Computers.h
source/BreadMaker.cpp
source/BreadMaker.h
source/Mixer.cpp
source/Mixer.h
source/BatteryMower.cpp
source/BatteryMower.h
)
