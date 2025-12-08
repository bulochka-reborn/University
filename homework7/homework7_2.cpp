#include <iostream>
#include <vector>
#include <algorithm>

void notAinBGreaterThanZero(const std::vector<int> &A, const std::vector<int> &B, std::vector<int> &res) {
    for (int b : B) {
        if (b < 0 || std::find(A.begin(), A.end(), b) != A.end()) {
            continue;
        }
        res.push_back(b);
    }
}

int main() {
    std::vector<int> A;
    std::vector<int> B;
    std::vector<int> *res;
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

    notAinBGreaterThanZero(A, B, res);

    for (int c : res) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}