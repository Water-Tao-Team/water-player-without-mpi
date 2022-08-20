# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (mvc_framework)

# Prop
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# boost
find_package(Boost COMPONENTS program_options REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
  ${PROJECT_SOURCE_DIR}/controller/src/hello_controller.cc
  ${PROJECT_SOURCE_DIR}/view/src/hello_view.cc
  ${PROJECT_SOURCE_DIR}/model/src/hello_model.cc
  ${PROJECT_SOURCE_DIR}/main.cc
)

# Add an executable with the above sources
add_executable(mvc_framework ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(mvc_framework
  PRIVATE 
    # log
    ${PROJECT_SOURCE_DIR}/log/include

    # mvc
    ${PROJECT_SOURCE_DIR}/mvc/include
    ${PROJECT_SOURCE_DIR}/view/include
    ${PROJECT_SOURCE_DIR}/model/include
    ${PROJECT_SOURCE_DIR}/controller/include

)

# link libraries
target_link_libraries(mvc_framework LINK_PUBLIC ${Boost_LIBRARIES})