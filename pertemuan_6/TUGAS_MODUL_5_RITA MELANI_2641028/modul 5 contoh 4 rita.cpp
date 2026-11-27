#include <iostream>

int main() {
    int mulai = 5;

    std::cout << "Mulai hitung mundur dari " << mulai << "...\n";
    while (mulai > 0) {
        std::cout << mulai << "...\n";
        --mulai;
    }
    std::cout << "Liftoff!\n";

    // Bilangan pangkat dua sampai batas tertentu
    int batas = 1000;
    std::cout << "\nPangkat dua <= " << batas << ": ";
    int p = 1;
    while (p <= batas) {
        std::cout << p << ' ';
        p *= 2;                  // 1, 2, 4, 8, 16, ...
    }
    std::cout << '\n';

    return 0;
}