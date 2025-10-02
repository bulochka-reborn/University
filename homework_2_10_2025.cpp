#include <algorithm>
#include <iostream> 
#include <cmath> 

int main() {
    float x, y, r, s, c;

    std::cin >> x >> y;

    r = 1 / std::tan(M_PI * (x / y));
    s = std::cbrt((x + std::log(1 / x)));

    std::cout << r << " " << s << " ";

    c = std::max(r, s);

    std::cout << c << "\n";
}