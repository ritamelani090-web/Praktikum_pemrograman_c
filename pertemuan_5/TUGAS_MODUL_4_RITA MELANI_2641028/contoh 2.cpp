#include <iostream>

int main() {
	int i = 5;
	
	int pre = ++i; //naikan dulu (i=6), lalu pakai nilainya 
	std::cout << "pre-increment -> i =" << i << ", pre = " << pre << '\n';
	
	i = 5;
	int post = i++; // pakai nilainya dulu (post=5), post = " << post << '\n';
	
	int j = 10;
	int decre = -- j; // pre - decrement
	std::cout << "pre-decrement -> j = " << j << ", decre = " << decre << '\n';
	
	// efek samping di dalam loop (dibahas lebih lanjut pada modul 04)
	for (int k = 0; k < 3; ++k) {
		std::cout << "iterasi " << k << '\n';
	}
	
	return 0;
}