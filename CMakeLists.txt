cmake_minimum_required(VERSION 3.0.0)

project(PWM)

add_executable(${PROJECT_NAME}
    main.cpp
    ./src/hw/PWM/PWM.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ./src/hw/PWM
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)

target_compile_options(${PROJECT_NAME} PUBLIC
    -Wall
)
