project(running_app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Quick REQUIRED)

add_executable(RunningApp
    main.cpp
    backend.h
    resources.qrc
)

target_link_libraries(RunningApp PRIVATE Qt6::Quick)
