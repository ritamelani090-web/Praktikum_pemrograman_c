/*
* contoh 14 - studi kasus: tarif parkir bertingkat 
* aturan:
*   - 1 jam pertama : Rp5.000
*   - setiap jam berikutnya : Rp3.000
*   - maksimum per hari : Rp50.000
*   - anggota member dapat potongan Rp2.000 (tidak menyebabkan negatif)
*/
#include <iostream>
#include <iomanip>

int main() {
	int jam = 3;
	bool member = true;
	
	long tarif;
	if (jam <= 1) {
		tarif = 5000;
	} else{
		tarif = 5000 + (jam - 1) * 3000;
	}
	
	if (tarif > 50000) {
		tarif = 50000;                   // batas maksimum per hari
	}
	
	if (member) {
		tarif -= 2000;
		if (tarif < 0) {
			tarif = 0;                   // pengaman agar tidak negatif
		}
	}
	
	std::cout << std::fixed << std::setprecision(0);
	std::cout << "jam parkir : " << jam << " jam\n";
	std::cout << "satatus    : " << (member ? "member" : "non-member") << '\n';
	std::cout << "tarif      : Rp" << tarif << '\n';
	
	return 0;
}
