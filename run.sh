#!/bin/bash

# Author : Pratik Gorade
# Description : this script runs the cpp  file given as an argument
# compiles it, runs it and clears the output file
if [ $# -eq 1 ]
  then
    /bin/g++ $1 && ./a.out
fi
rm -f a.out