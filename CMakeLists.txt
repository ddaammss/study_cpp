cmake_minimum_required(VERSION 3.10)
project(study_cpp)

set(CMAKE_CXX_STANDARD 14)

# section3
#add_executable(methodArray study/section3/struct/methodArray.cpp)
#add_executable(methodStruct study/section3/struct/methodStruct.cpp)
#add_executable(struct study/section3/struct/struct.cpp)
#add_executable(pointer study/section3/pointer/pointer.cpp)

# section7
add_executable(inline study/section7/inline.cpp)
add_executable(default_parameter study/section7/default_parameter.cpp)
add_executable(reference_variable study/section7/reference_variable.cpp)
add_executable(overloading study/section7/overloading.cpp)
add_executable(template study/section7/template.cpp)

# section8
add_executable(abstract_class
    study/section8/abstract_class/main.cpp
    study/section8/abstract_class/fun.cpp
)
add_executable(separate_compilation
    study/section8/separate_compilation/main.cpp
    study/section8/separate_compilation/fun.cpp
)


