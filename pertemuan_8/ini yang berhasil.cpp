#include <iostream>

int main() {
	int n, i;
	int suku = 2;
	int jumlah = 0;
	float rata_rata = 0;
	int ganjil = 0;
	
	std::cout << "masukan n (1-40) :" ;
	std::cin >> n;
	
	std::cout << "deret : ";
	
    for (i = 1; i <= n; i++)  {
		std::cout << suku << " ";
		
		jumlah = jumlah + suku;
		if (suku % 2 !=0) {
			ganjil++;
		}
		suku = suku + 7;
	}
	rata_rata = jumlah / n;
	
	std::cout << "\nJumlah :" << jumlah;
	std::cout << "\nRata-rata : " << rata_rata;
	std::cout << "\nGanjil : " << ganjil;
	
	return 0;
	
}