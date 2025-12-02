# define project name and language
project(Gameqt5 CXX)

cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# take all the sources
file( GLOB my_srcs *.cpp *.h *.hpp *.qrc *.ui )

# activate the resource compiler (RCC)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# add executable
add_executable (${PROJECT_NAME} ${my_srcs} )

# check the existence of QT libraries
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Multimedia REQUIRED)

# link the executable with the libraries
#target_link_libraries (${PROJECT_NAME} Qt5::Widgets)
target_link_libraries (${PROJECT_NAME} Qt5::Widgets Qt5::Multimedia)
