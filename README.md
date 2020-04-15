WallTree
A Wallace Tree Multiplier VHDL generator
========

A VHDL code generator for wallace tree multiplier written in C++.
The generated code for various width sizes have been verified using Modelsim. 

To run the program, compile it first :

~~~
g++ -O3 -Wall *.cpp -o wt
~~~

Run it (for example 16 bit multiplier. When I say 16 bit, its the width of the operands. The width of the product will be larger. If you wish to limit the result's width also, change the generator code.):

~~~
./wt -w 16 > wt.vhd
~~~

A sample generated VHDL code for a 10 bit multiplier is uploaded at the git along with the generator code.
