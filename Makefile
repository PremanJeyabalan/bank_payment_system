CPPS := $(wildcard *.cpp)
CPPS := $(filter-out main.cpp, $(CPPS))
OBJS := $(CPPS:.cpp=.o)

# Use -DDEBUG to enable debugging, you may also write your own debuggings
# FLAGS='-DDEBUG -std=c++11'

FLAGS='-std=c++11'

default: bank.exe

%.o: %.cpp
	g++ -c $< -o $@ $(FLAGS)

bank.exe: $(OBJS) main.cpp
	g++ $^ $(FLAGS) -o $@

clean:
	rm -f *.o bank.exe
	# windows:
	# del *.o