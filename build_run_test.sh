#!/bin/bash

echo -e "\n[Building...]"
rm -rf build && mkdir build && \\
cd build && cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" && make all
echo -e "[Building terminated]\n"

echo -e "\n[Running...]"
./src/ExampleProject_run
echo -e "[Running  terminated]\n"

echo -e "\n[Testing...]"
./tst/ExampleProject_tst 
echo -e "[Testing  terminated]\n"
