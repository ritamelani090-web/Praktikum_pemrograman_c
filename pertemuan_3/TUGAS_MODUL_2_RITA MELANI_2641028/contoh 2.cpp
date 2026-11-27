#include <iostream>
#include <iomanip>

#define PI 3.14159
#define NAMA_KAMPUS "Universitas Mandala"
#define MAX_SISWA 40

int main() {
	const double GRAVITASI =9.8;
	constexpr int TAHUN_AJARAN = 2026;
	
	std::cout << "PI           : " << std::fixed << std::setprecision(5) << PI << '\n';
	std::cout << "Nama Kampus  : " << NAMA_KAMPUS << '\n';
	std::cout << "Max siswa    : " << MAX_SISWA << '\n';
	std::cout << "Gravitasi    : " << GRAVITASI << '\n';
	std::cout << "Tahun ajaran : " << TAHUN_AJARAN << '\n';
	
	return 0;
}