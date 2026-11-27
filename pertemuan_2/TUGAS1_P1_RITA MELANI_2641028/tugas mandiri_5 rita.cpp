#include <iostream>

int main() {
    int a = 10;
    int b = 15;
    std::cout << "Masukkan a dan b: 10 15 ";
    

    std::cout << "Sebelum : a = " << a << ", b = " << b << '\n';

    int temp = a;
    a = b;
    b = temp;

    std::cout << "Sesudah : a = " << a << ", b = " << b << '\n';
    return 0;
}
