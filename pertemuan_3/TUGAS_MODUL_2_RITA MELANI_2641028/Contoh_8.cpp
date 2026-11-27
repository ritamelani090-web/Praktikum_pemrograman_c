#include <iostream>
#include <iomanip>

int main() {
	double a = 25;
	double b = 4;
	
	std::cout << "Nilai a = " << a << " dan b = " << b << "\n";
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\n=== Hasil ===\n";
	std::cout << a << " + " << b << " = " << a + b << '\n';
	std::cout << a << " - " << b << " = " << a - b << '\n';
	std::cout << a << " * " << b << " = " << a * b << '\n';
	
	if (b != 0.0)
	    std::cout << a << " / " << b << " = " << a /b << '\n';
	else
	std::cout << "Pembagian dengan nol tidak diperbolehkan. \n";
	
	return 0;
		}