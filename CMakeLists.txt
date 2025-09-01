cmake_minimum_required(VERSION 3.10)
project(LevelBuilderAIMod)

set(CMAKE_CXX_STANDARD 17)

# Вказуємо папки з include
include_directories(include)

# Додаємо src файли
add_library(LevelBuilderAIMod SHARED src/main.cpp)
