#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> urutanKedatangan = {"Ningguang", "Hutao", "Xiao", "Childe"};

    string yangFoto = "Xiao";
    string yangMengambilKue;

    if (yangFoto == "Xiao") {
        cout << "Foto yang diambil oleh " << yangFoto << " menunjukkan kue masih utuh." << endl;

        // Mengurutkan urutan kedatangan berdasarkan urutan fotografi
        rotate(urutanKedatangan.begin(), find(urutanKedatangan.begin(), urutanKedatangan.end(), yangFoto), urutanKedatangan.end());

        // Menentukan siapa yang paling mungkin mengambil kue
        for (const auto &teman : urutanKedatangan) {
            if (teman == "Hutao" || teman == "Childe") {
                continue; // Hutao dan Childe tidak mungkin mengambil kue
            } else {
                yangMengambilKue = teman;
                break;
            }
        }

        cout << "Berdasarkan informasi, " << yangMengambilKue << " adalah yang paling mungkin mengambil kue." << endl;
    } else {
        cout << "Tidak ada informasi yang valid untuk menentukan siapa yang paling mungkin mengambil kue." << endl;
    }
    return 0;
}
