# Delete and Recreate bin folder
rm -rf build/
mkdir build/
# Compile for Debug
g++ src/main.cpp -o build/comparison -g
# Run
gdb ./build/comparison