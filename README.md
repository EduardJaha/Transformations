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

## Method to run the project

*In each of the directories you can find the header files and the cc files to be executed.* 

For the project to be runned and build, you need to open the terminal and create a directory **build**, and build the project in **/Transformations/build$ cmake ..** and type **cmake --build**, to build the whole project. To run the project in **main.cc** and check the transformations, after you build the project type **./Transformations_exec**. For the test to be runned you need to go in **/Transformations/build/test** and type **./Transformations_test**.

### Terminal example to run main and tests
```bash
/Transformations$ mkdir build
/Transformations$ cd build
/Transformations/build$ cmake ..
/Transformations/build$ cmake --build .
/Transformations/build$ ./Transformations_exec
/Transformations/build$ ./test/Transformations_test
```
### *Libraries which need to be installed in terminal:*

```bash
sudo apt install cmake
sudo apt-get install libgtest-dev
sudo apt install libeigen3-dev
sudo apt install doxygen
sudo apt install graphviz
```