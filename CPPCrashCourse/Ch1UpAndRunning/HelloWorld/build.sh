# Delete and Recreate bin folder
rm -rf build/
mkdir build/
# Compile
g++ src/main.cpp -o build/helloworld
# Run
./build/helloworld