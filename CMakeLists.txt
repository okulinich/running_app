cmake_minimum_required(VERSION 3.28)
project(running_app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)  # Enable automatic MOC processing
set(CMAKE_AUTORCC ON)  # Enable automatic resource file processing

find_package(Qt6 COMPONENTS Quick REQUIRED)

add_executable(RunningApp
    main.cpp
    backend.cpp
    resources.qrc
)

target_link_libraries(RunningApp PRIVATE Qt6::Core Qt6::Qml Qt6::Gui)

# Ensure MOC is explicitly run for Backend
qt6_wrap_cpp(MOC_SOURCES backend.h)
target_sources(RunningApp PRIVATE ${MOC_SOURCES})

