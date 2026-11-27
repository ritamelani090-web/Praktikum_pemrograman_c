#include <iostream>

int main() {
	// 1) Deklarasi tanpa nilai awal, lalu diisi
	int umur;
	umur = 20;
	
	// 2) Deklarasi sekaligus inisialisasi (brcae-init)
	int tahun{2026};
	
	// 3) Deklarasi beberapa variabel sekaligus 
    int a = 5, b = 10, hasil;
	hasil = a + b;
	
	std::cout << "Umur       : " << umur << " tahun\n";
	std::cout << "Tahun      : " << tahun << '\n';
	std::cout << "Nilai a    : " << a     << '\n';
	std::cout << "Nilai b    : " << b     << '\n';
	std::cout << "a + b      : " << hasil << '\n';
	
	return 0;
	
}