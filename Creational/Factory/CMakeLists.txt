cmake_minimum_required(VERSION 3.10.0)

project(FactoryDemo)

# Set the C++ version required
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ensures adding current source and build directory to the include path
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Move the .exe into the Bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Create the variable for the sources 
set(SRCS
	main.cpp
	baseclass.cpp
	derivedclassone.cpp
	derivedclasstwo.cpp
    )

# Create the variable for the headers    
set(HEADERS
	baseclass.hpp
	derivedclassone.hpp
	derivedclasstwo.hpp
	derivedclassfactory.hpp
	derivedclassfactoryexception.hpp
    )

# Exec
add_executable(FactoryDemo ${SRCS} ${HEADERS})
