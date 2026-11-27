#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string nama = "Rita melani";
    int         nim = 2641028;
    double      ipk = 3.55;

    

    std::cout << std::left << std::setprecision(2) << std::fixed;
    std::cout << "+" << std::string(24, '-') << "+" << std::string(29, '-') << "+\n";
    std::cout << "| " << std::setw(22) << "Field" << " | "
              << std::setw(27) << "Nilai" << " |\n";
    std::cout << "+" << std::string(24, '-') << "+" << std::string(29, '-') << "+\n";
    std::cout << "| " << std::setw(22) << "Nama" << " | "
              << std::setw(27) << nama << " |\n";
    std::cout << "| " << std::setw(22) << "NIM" << " | "
              << std::setw(27) << nim << " |\n";
    std::cout << "| " << std::setw(22) << "IPK" << " | "
              << std::setw(27) << ipk << " |\n";
    std::cout << "+" << std::string(24, '-') << "+" << std::string(29, '-') << "+\n";

    return 0;
}
