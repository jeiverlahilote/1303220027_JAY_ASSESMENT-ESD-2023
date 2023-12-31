#include <iostream>
#include <string>

using namespace std;

int main() {
    string isiChat =
        "xfqfr bfmdz\n"
        "gjxtp lzj rfz ifkyfw jxi snm\n"
        "gwt, gjxtp qz rfz rfpfs in bfwlty lfp?\n"
        "fpz xfdfsl pfrz, rfz lfp ofin ufhfwpz\n"
        "dfsl pnwnr xynhpjw otrtp pz pnhp ifwn lwzu";

    // Membuat fungsi untuk mendekripsi setiap karakter dalam string
    auto dekripsi = [](char c) -> char {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            return static_cast<char>((c - base + 21) % 26 + base);
        }
        return c;
    };

    // Mendekripsi isi chat
    for (char& karakter : isiChat) {
        karakter = dekripsi(karakter);
    }

    // Menampilkan hasil dekripsi
    cout << "Isi Chat yang Didekripsi:\n" << isiChat << endl;

    return 0;
}
