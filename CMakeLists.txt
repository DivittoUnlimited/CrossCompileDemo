cmake_minimum_required(VERSION 2.8)
project( CrossPlatformDemo CXX )

set(CMAKE_BUILD_TYPE
	"Release"
	"Build Type")

add_executable(demo main.cpp)
