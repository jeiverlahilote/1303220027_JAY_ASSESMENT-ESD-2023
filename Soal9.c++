#include <bits/stdc++.h>

using namespace std;

int main() {
    for ( int i = 0; i < 3; i++) {
        // Input data dari pengguna
        cout << "Masukkan nama-nama anak yang nakal (separated by space): ";
        string input;
        getline(cin, input);

        // Memisahkan nama-nama yang dimasukkan oleh pengguna
        map<string, int> countMap;
        size_t pos = 0;
        while ((pos = input.find(" ")) != string::npos) {
            countMap[input.substr(0, pos)]++;
            input.erase(0, pos + 1);
        }
        countMap[input]++;

        // Mencari nama anak yang paling banyak disebut
        string namaNakal;
        int maxCount = 0;

        for (const auto& pair : countMap) {
            cout << pair.first << ": " << pair.second << " kali\n";

            // Membandingkan untuk menemukan nama anak yang paling banyak disebut
            if (pair.second > maxCount) {
                namaNakal = pair.first;
                maxCount = pair.second;
            }
        }

        // Menampilkan nama anak yang paling banyak disebut
        cout << "Anak nakal: " << namaNakal << "\n";
    }
    return 0;
}
