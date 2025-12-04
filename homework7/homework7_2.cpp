#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int>* notAinBGreaterThanZero(const std::vector<int> &A, const std::vector<int> &B) {
    std::vector<int> *res = new std::vector<int>;

    for (int b : B) {
        if (b < 0 || std::find(A.begin(), A.end(), b) != A.end()) {
            continue;
        }
        res->push_back(b);
    }

    return res;
}

int main() {
    std::vector<int> A;
    std::vector<int> B;
    int buff;

    while (std::cin >> buff) {
        A.push_back(buff);

        if (std::cin.peek() == '\n') {
            std::cin.get(); 
            break;
        }
    }

    while (std::cin >> buff) {
        B.push_back(buff);

        if (std::cin.peek() == '\n') {
            std::cin.get();
            break;
        }
    }

    for (int c : *notAinBGreaterThanZero(A, B)) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}