#include <iostream>
#include <string>
#include <iomanip>

int main() {
	std::string nama_barang = "sapu lidi";
	double harga_satuan = 5000.0;
	int jumlah_beli = 5;
	double persentase_diskon  = 10.0;
	
	
	const double PPN_RATE =0.11;
	
	double subtotal = harga_satuan * jumlah_beli;
	double potongan_diskon = subtotal * persentase_diskon / 100.0;
	double nilai_setelah_diskon = subtotal - potongan_diskon;
	double ppn = PPN_RATE * nilai_setelah_diskon;
	double total_bayar = nilai_setelah_diskon + ppn;
	
	std::cout << std::fixed << std::setprecision(2);
	
	std::cout << "\n==== STRUK PEMBELIAN ====\n";
	std::cout << std::left << std::setw(16) << "Barang" << ":" << nama_barang << "\n";
	std::cout << std::left << std::setw(16) << "Harga satuan" << ": RP " << std::right << std::setw(10) << harga_satuan << "\n";
	std::cout << std::left << std::setw(16) << "Jumlah" << ": " << jumlah_beli << "\n";
	std::cout << std::left << std::setw(16) << "Subtotal" << ": RP " << std::right << std::setw(10) << subtotal << "\n";
	
	std::string label_diskon = "Diskon (" + std::to_string ((int) persentase_diskon) + "%)";
	std::cout << std::left << std::setw(16) << label_diskon << ": Rp " << std::right << std::setw(10) << potongan_diskon << "\n";
	
	std::cout << std::left << std::setw(16) << "Setelah diskon" << ": Rp " <<std::right << std::setw(10) << potongan_diskon << "\n";
	std::cout << std::left << std::setw(16) << "PPN 11%" << ":Rp " << std::right << std::setw(10) << ppn << "\n";
	std::cout << std::left << std::setw(16) << "Total bayar" << ": Rp " << std::right << std::setw(10) << total_bayar << "\n";
	std::cout << "===========================\n";
	
	return 0; 
}