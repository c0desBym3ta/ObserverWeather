cmake_minimum_required(VERSION 3.8)
project(ObserverTry)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Subject.h Observer.h .idea/WeatherData.h WeatherData.h CurrentConditionsDisplay.h)
add_executable(ObserverTry ${SOURCE_FILES})