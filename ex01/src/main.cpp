#include"./include/iter.hpp"
#include <iostream>

void print(int &a) {
    std::cout << a << std::endl;
}

int main() {
    int array[] = { 1, 2, 3, 4, 5 };
    int len = sizeof(array) / sizeof(int);
    iter(array, len, &print);

    return 0;
}
