# Delete and Recreate bin folder
rm -rf build/
mkdir build/
# Compile for Debug
g++ src/main.cpp -o build/helloworld -g
# Run
gdb ./build/helloworld