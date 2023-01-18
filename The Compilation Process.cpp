g++ - c my_function.cpp       # Compiles the source file my_function.cpp
# --> object file my_function.o

g++ main.cpp my_function.o   # Links the object file containing the
# implementation of int my_function()
# to the compiled, object version of main.cpp
#and then produces the final executable a.out



g++ - c my_function.cpp
g++ - c main.cpp

g++ main.o my_function.o
