
#include "header.h"

#include <iostream>

// using namespace std; BAD PRACTICE

template <typename... Num>
int addAll(Num... n);

int main(){
    std::cout << addAll(1, 2, 3, 4, 5, -1);
    
    // Comment out by using if 0 and if 1
#if 1
    std::cout << 'aaaaa';
    test_directive();
#endif
    return 0;
}

int test_directive(){
    std::cout << "test";
};


template <typename... Num>
int addAll(Num... n){
    return (n + ...);
}