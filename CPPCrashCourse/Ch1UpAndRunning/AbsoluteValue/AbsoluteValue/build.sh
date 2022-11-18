# Delete and Recreate bin folder
rm -rf build/
mkdir build/
# Compile
g++ AbsoluteValue.cpp -o build/AbsoluteValue
# Run
./build/AbsoluteValue