#include <iostream> 

int main() { 
    const int JUMLAH = 5; 
	int nilai[JUMLAH] = {78, 85, 62, 90, 70};
	
	std::cout << "Isi array nilai:\n"; 
	for (int i = 0; i < JUMLAH; ++i) {
    	std::cout << " nilai[" << i << "] = " << nilai[i] << '\n';
	 }
	 
    std::cout << "\nElemen pertama : " << nilai[0] << '\n';
    std::cout << "Elemen terakhir : " << nilai[JUMLAH - 1] << '\n';
    
    nilai[2] = 75;
    std::cout <<  "Setelah nilai[2] diubah menjadi 75: " << nilai[2] << '\n';
    
    std::cout << "\nUkuran satu elemen : " << sizeof(nilai[0]) << " byte\n"; 
	std::cout << "Ukuran seluruh array : " << sizeof(nilai ) << " byte\n"; 
	std::cout << "Banyak elemen : "
	          << sizeof(nilai)/ sizeof(nilai[0]) << '\n'; 
	
	return 0;
 }