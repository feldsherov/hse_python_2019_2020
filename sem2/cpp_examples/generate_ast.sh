#!/bin/bash

set -e;
set -x;

# inspired by https://stackoverflow.com/questions/19960842/how-to-get-the-ast-of-a-single-cpp-file-with-clang
for name in *.cpp
do
  clang -Xclang -ast-dump -fsyntax-only ${name} > ${name}.ast
done
