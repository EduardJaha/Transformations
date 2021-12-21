# Matrix Transformations

## What are matrix transformations 

In linear algebra, linear transformations can be represented by matrices. They allow arbitrary linear transformations to be displayed in a consistent format, suitable for computation. This also allows transformations to be composed easily by multiplying their matrices.

The aim of this project is to implement these transformations through a coding program with C++. The transformations that will be implemented are: **translate, scale, rotate, shear in x direction, shear in y direction, reflect about origin, reflect about x-axis and reflect about y-axis**

The project will be in created in the head file called **Transformations**. In the following you can see the dependencies of the files.

### Transformations

* include
  * EigenWrapper
    * eigen_wrapper.hpp
* src
  * eigen_wrapper.cc
  * main.cc
* test
  * CMakeLists.txt
  * eigen_wrapper_test.cc
  * eigen_wrapper_test.hh
* CMakeLists.txt

### *Libraries which need to be installed in terminal:*

* CMake
```bash
    $ sudo apt install cmake
```
* Google's framework for writing C++ tests
```bash
    $ sudo apt-get install libgtest-dev
```
* Template library for linear algebra
```bash
    $ sudo apt install libeigen3-dev
```
* Generate documentation from source code
```bash
    $ sudo apt install doxygen
```
* Graphviz
```bash
    $ sudo apt install graphviz
```
## Method to run the project

*In each of the directories you can find the header files and the cc files to be executed.* 

For the project to be runned and build, you need to open the terminal and do the following:

### Terminal example to run main
```bash
/Transformations$ mkdir build
/Transformations$ cd build
$ cmake ..
$ cmake --build .
$ ./Transformations_exec
```
### Terminal example to run tests
```bash
/Transformations/build$ cd test
$ cmake ..
$ cmake --build .
$ ./Transformations_test
```