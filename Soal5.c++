#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int totalCharacters = 10; // total karakter dalam nama "Naip Lovyu"
    int maxUsernameLength = 6; // panjang maksimal username

    int totalCombinations = 0;
    for (int length = 1; length <= maxUsernameLength; ++length) {
        totalCombinations += pow(26, length);
    }

    cout << "Jumlah kombinasi username yang mungkin: " << totalCombinations << endl;

    return 0;
}
