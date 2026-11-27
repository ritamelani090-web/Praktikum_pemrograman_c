#include <iostream> 

int main() {
	int suhu = 38;
	
	if (suhu > 37) {
		std::cout << "suhu tubuh di atas normal (demam). \n";
	}
	
	// kurung kurawal opsional untuk satu pernyataan, tetapi selalu disarankan
	int stok = 0;
	if (stok == 0) {
		std::cout << "stok habis, harap lakukan pemesanan ulang \n";
	}
	
	return 0;
}