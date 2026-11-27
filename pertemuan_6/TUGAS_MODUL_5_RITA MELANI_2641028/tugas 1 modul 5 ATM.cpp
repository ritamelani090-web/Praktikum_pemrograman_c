#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int PIN_BENAR = 54321;
    const double BIAYA_ADMIN = 5000.0;
    double saldo = 1000000000.0;

    int pin;
    bool berhasil = false;

    for (int percobaan = 1; percobaan <= 3; percobaan++) {
        cout << "Masukkan PIN ATM: ";
        cin >> pin;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Input PIN harus berupa angka.\n";
            continue;
        }

        if (pin == PIN_BENAR) {
            berhasil = true;
            cout << "PIN benar. Selamat datang!\n";
            break;
        } else {
            cout << "PIN salah. Percobaan ke-"
                 << percobaan << " dari 3.\n";
        }
    }

    if (!berhasil) {
        cout << "PIN salah 3 kali. Kartu diblokir.\n";
        return 0;
    }

    int pilihan;
    double nominal;

    cout << fixed << setprecision(2);

    // Menu diulang sampai pengguna memilih keluar
    do {
        cout << "\n===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Setor Tunai\n";
        cout << "3. Tarik Tunai\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";

        cin >> pilihan;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Pilihan harus berupa angka.\n";
            continue;
        }

        switch (pilihan) {
            case 1:
                cout << "Saldo Anda: Rp"
                     << saldo << '\n';
                break;

            case 2: {
                do {
                    cout << "Nominal setor "
                         << "(positif, kelipatan Rp10000): Rp";
                    cin >> nominal;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Input harus berupa angka.\n";
                        nominal = 0;
                        continue;
                    }

                    if (nominal <= 0 ||
                        nominal != static_cast<long long>(nominal) ||
                        static_cast<long long>(nominal) % 10000 != 0) {
                        cout << "Nominal setor tidak valid.\n";
                    }
                } while (nominal <= 0 ||
                         nominal != static_cast<long long>(nominal) ||
                         static_cast<long long>(nominal) % 10000 != 0);

                saldo += nominal;
                cout << "Setor berhasil.\n";
                cout << "Saldo sekarang: Rp"
                     << saldo << '\n';
                break;
            }

            case 3: {
                do {
                    cout << "Nominal tarik "
                         "(positif, kelipatan Rp10000): Rp";
                    cin >> nominal;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Input harus berupa angka.\n";
                        nominal = 0;
                        continue;
                    }

                    if (nominal <= 0 ||
                        nominal != static_cast<long long>(nominal) ||
                        static_cast<long long>(nominal) % 50000 != 0) {
                        cout << "Nominal tarik tidak valid.\n";
                    }
                } while (nominal <= 0 ||
                         nominal != static_cast<long long>(nominal) ||
                         static_cast<long long>(nominal) % 50000 != 0);

                if (nominal + BIAYA_ADMIN > saldo) {
                    cout << "Saldo tidak cukup "
                         "untuk nominal dan biaya admin.\n";
                } else {
                    saldo -= nominal + BIAYA_ADMIN;
                    cout << "Tarik tunai berhasil.\n";
                    cout << "Nominal tarik: Rp"
                         << nominal << '\n';
                    cout << "Biaya admin: Rp"
                         << BIAYA_ADMIN << '\n';
                    cout << "Saldo sekarang: Rp"
                         << saldo << '\n';
                }
                break;
            }

            case 4:
                cout << "Terima kasih telah menggunakan ATM.\n";
                break;

            default:
                cout << "Pilihan menu tidak tersedia.\n";
                break;
        }

    } while (pilihan != 4);

    return 0;
}