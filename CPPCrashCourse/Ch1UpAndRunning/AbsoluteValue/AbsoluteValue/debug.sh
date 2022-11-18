# Delete and Recreate bin folder
rm -rf build/
mkdir build/
# Compile for Debug
g++ src/main.cpp -o build/step -g
# Run
gdb ./build/step