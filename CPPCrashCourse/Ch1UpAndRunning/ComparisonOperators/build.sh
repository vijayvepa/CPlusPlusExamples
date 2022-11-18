# Delete and Recreate bin folder
rm -rf build/
mkdir build/
# Compile
g++ src/main.cpp -o build/comparison
# Run
./build/comparison