#!/bin/bash
mkdir build && cd build && cmake ../ && make VERBOSE=1 && mv usingCmake ../ && cd .. && rm -rf build/ 