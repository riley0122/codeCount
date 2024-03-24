echo "Cleaning up previous build..."
rm -rf build
echo "Building new build..."
cmake -S . -B build
cd build
echo "Making new build..."
make
echo "Finished building, executable is @ build/codeCount"
