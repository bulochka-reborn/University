#include <iostream>

void calculateItemsBiggerThanT(const int* arr, const int t, int& c) {
    c = 0;
    for (int i = 0; i < 5; i++) {
        c += arr[i] > t ? 1 : 0;
    }
}

int *findArrayWithMaxItemsBiggerThanT(int *arrA, int *arrB, const int &t) {
    int tcA = 0, tcB = 0;

    calculateItemsBiggerThanT(arrA, t, tcA);
    calculateItemsBiggerThanT(arrB, t, tcB);

    if (tcA > tcB) {
        return arrA;
    }

    return arrB;
}

int main() {
    int t;
    std::cout << "t:" << std::endl;
    std::cin >> t;

    int* A = new int[5]; 
    int* B = new int[5];

    // Ввод массивов
    std::cout << "A:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> A[i];
    }

    std::cout << "B:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> B[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << findArrayWithMaxItemsBiggerThanT(A, B, t)[i] << " ";
    }
    std::cout << std::endl;

    // Освобождение выделенной памяти
    delete[] A;
    delete[] B;

    system("pause");

    return 0;
}