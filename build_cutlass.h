export CUDACXX=/usr/local/cuda/bin/nvcc
export CC=/usr/bin/gcc
export CXX=/usr/bin/g++
rm -rf build
mkdir -p build && cd build
cmake .. -DCUTLASS_NVCC_ARCHS=89
make -j 8
