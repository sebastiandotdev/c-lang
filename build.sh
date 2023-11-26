#! /bin/bash

# Build the project

echo "Building the project..."

gcc src/main.c -o bin/main.exe

echo "Done."

./bin/main.exe