CXX = g++
CXXFLAGS = -Wall -std=c++17 -Igrid -Icommands
TARGET = algoquest

# Source files
SRCS = main.cpp grid/grid.cpp commands/commands.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)
