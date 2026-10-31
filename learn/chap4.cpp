#include <iomanip> //for std::setprecision()
#include <iostream>

//signed keyword is generally redundant
//unsigned keyword should be avoided
//values of int can vary between computer architectures

int x = 0;
short y = 0;
long z = 0;
long long w = 0;

//static_cast<type>(variable)

int main(){
    
    double num{0.1711};
    bool low_press {false};
    bool high_press {true};

    if (low_press){
        std::cout << num << '\n';
    } else if (high_press) {
        std::cout << std::setprecision(25);
        std::cout << num << '\n';
    } else {
        std::cout << "not defined";
    }
        
    if (low_press)
        std::cout << num << '\n';
    else if (high_press)
        std::cout << num << '\n';
    else    
        std::cout << "not defined";

    
    return 0;
}

void nothing_function(){
    int nothing = 0;
    //function without return
}
