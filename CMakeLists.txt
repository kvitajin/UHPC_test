CMAKE_MINIMUM_REQUIRED(VERSION 3.23)
PROJECT(heatedplate LANGUAGES CXX)
ADD_SUBDIRECTORY(src)
FIND_PACKAGE(OpenMP)
SET(CMAKE_BUILD_TYPE Debug)


