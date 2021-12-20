# Matrix Transformations

_This is a project that will create an identity matrix. The identity matrix will go through some various transformations and a final test._

*The project will be in created in the head file called **Transformations**. In the following you can see how the files are organized:*

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

For the project to be runned, you need to open the terminal and build the project in **/Transformations/build$ cmake --build .**, and then type **./Transformations** to run **main.cc**. For the test to be runned you need to go in __/Transformations/build/test__ and type **./Transformations_test**.

### *Libraries which need to be installed:*

* **sudo apt-get install libgtest-dev**
* **sudo apt install libeigen3-dev**
* **sudo apt install doxygen**
* **sudo apt install graphviz**
