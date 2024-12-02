cmake_minimum_required(VERSION 3.20)
project(QTrip)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Sql)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# UI files
qt6_wrap_ui(UI_HEADERS ui/mainWindow.ui)

# Source files

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES} ${UI_HEADERS} ${HEADERS})

# Link Qt libraries
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Sql)

target_sources(QTrip
  PRIVATE
    dbhandler.h dbhandler.cpp
)
