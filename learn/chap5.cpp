#include <iostream>
#include <iomanip>
#include <format>
#include <print>
#include <bitset>
#include <string>

const float earthGravity{9.81};
#define GRAVITY 9.81


constexpr std::bitset<8> dec23{23};
std::bitset<8> bin23{0b10111};
//std::bitset<8> oct23{0o27};
std::bitset<8> hex23{0x17};
constexpr int n1 = 20;
constexpr int n2 = 30;

int main(){

    std::string name{"Guilherme Ryuji Weber Nakamura"};
    std::string_view name2{"Emma Poma"};

    std::cout << dec23 << " " << bin23 << " " << hex23 << " ";
    std::println("{} {} {}", dec23.to_string(), bin23.to_string(), hex23.to_string());
    std::println("dec={0} bin={0:08b} oct={0:o} hex={0:#x}", 23);
    
    constexpr float x{static_cast<float>(sizeof(dec23)) / static_cast<float>(cmax(n1, n2)) - 2.0};
    std::cout << x;

    return 0;
}


constexpr int cmax(int x, int y) // this is a constexpr function
{
    if (x > y)
        return x;
    else
        return y;
}