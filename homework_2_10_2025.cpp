#define _USE_MATH_DEFINES

#include <algorithm>
#include <iostream> 
#include <locale>
#include <cmath> 

int main() {
    setlocale(LC_ALL, "Russian");

    float x, y, r, s, c;

    std::cin >> x >> y;

    r = 1 / std::tan(M_PI * (x / y));
    s = std::cbrt((x + std::log(1 / x)));

    std::cout << r << " " << s << " ";

    c = std::max(r, s);

    std::cout << c << "\n";

    system("pause");
   
}