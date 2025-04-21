CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -O2
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc

# Target executable
TARGET = Lab07

# Source and object files
SRCS = main.cpp $(SRC_DIR)/Cylinder.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Compile the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(TARGET) $(OBJS)

# Rebuild from scratch
rebuild: clean all