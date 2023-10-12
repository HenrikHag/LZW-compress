CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = lzw_compress.cpp algorithm_lzw.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = lzw_compress

all: $(TARGET)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Link object files into an executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Clean up the generated files
clean:
	rm -f $(OBJS) $(TARGET)
