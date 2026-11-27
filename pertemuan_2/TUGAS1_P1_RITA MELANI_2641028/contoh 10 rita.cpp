#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string nama;
    int jamKerja;

    const double TARIF        = 25000.0; // per jam
    const double FAKTOR_LEMBUR = 1.5;     // 1.5x tarif per jam lembur
    const int    JAM_NORMAL   = 40;

    std::cout << "Nama karyawan  : "; std::cin >> nama;
    std::cout << "Jam kerja/minggu : "; std::cin >> jamKerja;

    int jamPokok = jamKerja;
    if (jamPokok > JAM_NORMAL) jamPokok = JAM_NORMAL;
    int jamLembur = jamKerja - jamPokok;

    double gajiPokok  = jamPokok * TARIF;
    double gajiLembur = jamLembur * TARIF * FAKTOR_LEMBUR;
    double total      = gajiPokok + gajiLembur;

    std::cout << "\n=== Slip Gaji: " << nama << " ===\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Jam kerja  : " << jamKerja << " jam\n";
    std::cout << "Jam lembur : " << jamLembur << " jam\n";
    std::cout << "Gaji pokok : Rp " << std::setw(12) << gajiPokok  << '\n';
    std::cout << "Gaji lembur: Rp " << std::setw(12) << gajiLembur << '\n';
    std::cout << "Total gaji : Rp " << std::setw(12) << total      << '\n';

    return 0;
}
