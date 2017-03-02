# Matched-ADI-3D(Variable coefficients)

# README

## Project Name
Matched ADI method for parabolic interface problem in 3D space

## Project Description
A parabolic PDE solver for interface problem in 3D space based on finite difference method. The solver handles interface jump conditions by involving fictitious points. A new developed numerical method - Matched Interface and Boundary method has been applied to smooth the solutions along the interfaces. Taking the advantage of Alternating Directional Implicit(ADI) method, the solver is able to achieve unconditional stable for various complicated interfaces and jump conditions. Meanwhile, the high dimensional problem are deducted to several one dimensional problems and achieves a flop count of O(N).

## Implementation

Step 1: In terminal(Mac)/Command Line(Windows), go to the folder where the makefile is located, and type "make", it will compile and link to an executable file.

Step 2: Once you see ">>> compiled on (hostname of your PC) with  <<<", this mean the executable file is generated successfully.

Step 3: Type "./1D_MIB_TD" to run the executable file, you'll see results on the screen.

Step 4: If you want to compile with a set of new parameters, type "make clean" to remove the previous object files and executable file. Then go to Step 1.

## Reminds

• The solver has to be compiled by the compiler(like GNU ur LLVM) with C++11 support.

• Create a folder called "result" before running which will contain all the results in txt files. 

• All the "Eq" files determines the analytical solution of the parabolic interface problem.

• All the "Surface" files specifies the shape of the surface defined by a implicit function in a Cartesian coordinate.

• User-specified data in the same format as files in "data" folder.