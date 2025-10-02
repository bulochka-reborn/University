#include <algorithm>
#include <iostream> 
#include <cmath> 

int main() {
    float x, y, r, s, c;

    std::cin >> x >> y;

    r = std::tan(M_PI * (x / y));
    s = std::pow((x + std::log(1 / x)), 3);

    std::cout << r << " " << s << " ";

    c = std::max(r, s);

    std::cout << c << "\n";
}