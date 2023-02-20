#include <iostream>
#include "./include/Array.hpp"

int main() {
    Array<int> arr1(3);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    Array<int> arr2(arr1);
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;

    Array<int> arr3;
    arr3 = arr1;

    std::cout << "arr1: ";
    for (unsigned int i = 0; i < arr1.size(); ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "arr2: ";
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std ::endl;
}