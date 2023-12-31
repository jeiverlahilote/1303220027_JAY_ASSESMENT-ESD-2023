#include <iostream>

using namespace std;

int main() {
    // Input total pengembalian dan jumlah uang yang dibayarkan oleh pelanggan
    for(int i = 0; i < 3; i++) {
        int totalBelanja, totalPembayaran;
        cout << "Masukkan total belanja: ";
        cin >> totalBelanja;
        cout << "Masukkan jumlah uang yang dibayarkan oleh pelanggan: ";
        cin >> totalPembayaran;

        // Menghitung uang kembalian
        int kembalian = totalPembayaran - totalBelanja;

        // Pecahan uang yang tersedia
        int pecahanUang[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};

        // Menghitung jumlah lembar dan keping koin untuk setiap pecahan
        cout << "Uang kembalian:\n";
        for (int i = 0; i < 10; ++i) {
            int jumlah = kembalian / pecahanUang[i];
            if (jumlah > 0) {
                cout << "Rp " << pecahanUang[i] << ": " << jumlah;
                if (pecahanUang[i] >= 1000) {
                    cout << " lembar";
                } else {
                    cout << " keping";
                }
                cout << endl;

                // Mengupdate sisa uang kembalian
                kembalian %= pecahanUang[i];
            }
        }
    }
    return 0;
}

