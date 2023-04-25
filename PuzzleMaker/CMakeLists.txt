cmake_minimum_required(VERSION 3.23)
project(PuzzleMaker)

set(CMAKE_CXX_STANDARD 14)

cmake_minimum_required(VERSION 3.9)

project(PuzzleMaker)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

set(SDL2_INCLUDE_DIR C:/libs/mingw_dev_lib/include/SDL2)
set(SDL2_LIB_DIR C:/libs/mingw_dev_lib/lib)

set(SDL2MIXER_INCLUDE_DIR C:/libs/mixer_dev_lib/include/SDL2)
set(SDL2MIXER_LIB_DIR C:/libs/mixer_dev_lib/lib)

include_directories(${SDL2_INCLUDE_DIR} ${SDL2MIXER_INCLUDE_DIR})
link_directories(${SDL2_LIB_DIR} ${SDL2MIXER_LIB_DIR})

add_executable(PuzzleMaker SDL_Plotter.h SDL_Plotter.cpp main.cpp)
target_link_libraries(${PROJECT_NAME} SDL2main SDL2 SDL2_mixer)

