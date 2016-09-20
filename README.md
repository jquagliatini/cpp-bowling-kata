# CPPBowlingKata :bowling:

[![Travis](https://img.shields.io/travis/1M0reBug/cpp-bowling-kata.svg?style=flat-square)](https://travis-ci.org/1M0reBug/cpp-bowling-kata)

This is an implementation of the famous Java Bowling Kata using C++, CPPUnit and CMake.
The purpose of the repo is to be the memory on how to build a TDD project using CMake and CPPUnit (and maybe how to link it with CI).

Every new test is tagged as `testX` where X is a number between 1 and 5.
The initial state is tagged `start` and final `end`.  
Here are the tagged commits.
```
* e1ee7ef (tag: test5) + testPerfectGame: X
* 0e0739a (tag: test4) + testStrike: X
* 403325f (tag: test3) + testSpare: X
* a683583 (tag: test2) + testAllOne: X
* a20b86a (tag: test1) + testAllGutter: X
```
Basically if you want to start the project you can do:

```
$ git clone https://github.com/1M0reBug/cpp-bowling-kata.github
$ cd cpp-bowling-kata
$ git checkout start
$ git checkout -b dev
```

## Building process
This project uses CMake as build system (actually it is more of a CMake POC than CPPUnit).

To build the system
```
$ ./build.sh
```

this script does nothing but
```
$ mkdir -p build && cd build && cmake ..
$ cd ..
```

## Launching the tests
When builded (on Linux) the Makefile will appear into the build directory.
To launch the tests, you can
```
$ cd build && make tests
$ cd ..
```

The output will look like something like that
```
[ 25%] Building CXX object src/CMakeFiles/game.dir/Game.cpp.o
Linking CXX shared library ../lib/libgame.so
[ 25%] Built target game
Linking CXX executable ../bin/mainTest
.....


OK (5 tests)


[ 75%] Built target mainTest
[100%] Runnint CPPUnit tests ...
.....


OK (5 tests)


[100%] Built target tests
```


## Dependencies
This project requires that CPPUnit and CMake to be both accessible from your PATH.

On Ubuntu to install these dependencies:
```
$ sudo apt-get install -y libcppunit-dev cmake
```
