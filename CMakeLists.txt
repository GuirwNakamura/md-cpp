cmake_minimum_required(VERSION 3.16)
project(md_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# MPI (libopenmpi-dev, openmpi-bin)
find_package(MPI REQUIRED)

# LAPACK and BLAS (liblapack-dev, libblas-dev)
find_package(LAPACK REQUIRED)

# HDF5 (libhdf5-dev)
find_package(HDF5 REQUIRED COMPONENTS C CXX)

# GSL (libgsl-dev)
find_package(GSL REQUIRED)

# FFTW3 (libfftw3-dev), found via pkg-config
find_package(PkgConfig REQUIRED)
pkg_check_modules(FFTW3 REQUIRED IMPORTED_TARGET fftw3)

add_executable(md_cpp src/main.cpp)

target_include_directories(md_cpp PRIVATE ${HDF5_INCLUDE_DIRS})

target_link_libraries(md_cpp
    PRIVATE
        MPI::MPI_CXX
        ${LAPACK_LIBRARIES}
        ${HDF5_LIBRARIES}
        GSL::gsl
        GSL::gslcblas
        PkgConfig::FFTW3
)