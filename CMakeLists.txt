# CMakeList.txt: проект CMake для NumericalMethods; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("NumericalMethods")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenMP REQUIRED)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (NumericalMethods  "main.cpp")


target_link_libraries(NumericalMethods PUBLIC OpenMP::OpenMP_CXX)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
