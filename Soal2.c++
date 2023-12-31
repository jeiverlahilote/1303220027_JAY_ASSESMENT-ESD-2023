#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(const string& str) {
    string cleanedStr;
    copy_if(str.begin(), str.end(), back_inserter(cleanedStr), [](char c) {
        return isalpha(c);
    });

    transform(cleanedStr.begin(), cleanedStr.end(), cleanedStr.begin(), ::tolower);

    return cleanedStr == string(cleanedStr.rbegin(), cleanedStr.rend());
}

int main() {
    for (int i = 0; i < 5; i++) {
        string input;
        cout << "Masukkan kalimat atau kata: ";
        getline(cin, input);

        if (isPalindrome(input)) {
            cout << "eureeka!" << endl;
        } else {
            cout << "suka blyat" << endl;
        }
    }
    return 0;
}
