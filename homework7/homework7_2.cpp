#include <iostream>
#include <set>
#include <algorithm>

void notAinBGreaterThanZero(const std::set<int>& A, const std::set<int>& B, std::set<int>& res) {
    for (int b : B) {
        if (b < 0 || std::find(A.begin(), A.end(), b) != A.end()) {
            continue;
        }
        res.insert(b);
    }
}

int main() {
    std::set<int> A;
    std::set<int> B;
    std::set<int> res;
    int buff;

    while (std::cin >> buff) {
        A.insert(buff);

        if (std::cin.peek() == '\n') {
            std::cin.get();
            break;
        }
    }

    while (std::cin >> buff) {
        B.insert(buff);

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