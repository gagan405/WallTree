WallTree
Author : Gagan Bihari Mishra
========

Date : 29 May 2012

A VHDL code generator for wallace tree multiplier.

The problem statement is inspired from my friend Arjun Shankar, who developed a nice little application in Java to generate synthesizable VHDL code for the Wallace Tree multiplier.

Due to lack of motivation, I haven't touched my C++ application since a long time. I hope to complete it sometime and update it here. 

The implementation by Arjun, takes care of registered/un-registered versions as well as signed/unsigned multiplication. I have no willingness to immplement those. Again, due to lack of motivation.

Date : 10 June 2012

The implementation is done! It uses C++ Vectors heavily.
The generated code for various width sizes have been verified using Modelsim. 

To run the program, compile it first :

g++ -O3 -Wall *.cpp -o wt

Run it (for example 16 bit multiplier. When I say 16 bit, its the width of the operands. The width of the product will be larger. If you wish to limit the result's width also, change the generator code.):

./wt -w 16 > wt.vhd

A sample generated VHDL code for a 10 bit multiplier is uploaded at the git along with the generator code.

Thank You!