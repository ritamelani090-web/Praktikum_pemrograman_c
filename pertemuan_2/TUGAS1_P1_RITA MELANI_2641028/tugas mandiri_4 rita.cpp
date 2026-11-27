#include <iostream>
#include <iomanip>

int main() {
    double n1 = 70;
    double n2 = 75;
    double n3 = 80;
    std::cout << "Masukkan 3 nilai: 70 75 80 ";
    

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Rata-rata: " << (n1 + n2 + n3) / 3.0 << '\n';
    return 0;
}