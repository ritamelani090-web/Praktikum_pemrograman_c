#include <iostream>
#include <iomanip>

int main() {
    double harga, persenDiskon;
    std::cout << "Harga barang   : 100.000 ";  
    std::cout << "Diskon (persen) : 10%"; 

    double potongan = harga * persenDiskon / 100.0;
    double bayar    = harga - potongan;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nHarga awal : " << std::setw(10) << harga << '\n';
    std::cout << "Diskon     : " << std::setw(10) << potongan << "  (" << persenDiskon << "%)\n";
    std::cout << "Bayar      : " << std::setw(10) << bayar << '\n';
    return 0;
}
