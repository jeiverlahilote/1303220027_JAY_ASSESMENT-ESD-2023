#include <iostream>

using namespace std;

bool cekduplicate(int arr[], int n);

int main()
{
    const int maxN = 100;
    int arr[maxN];
    cout << "mau berapa elemen? " << endl;
    int n;
    cin >> n;
    for ( int k = 0; k < n; k++) {
        cin >> arr[k];
    }

    if (cekduplicate(arr, n)) {
        cout << "\ntrue, ini ada duplicate" << endl;
    } else {
        cout << "false, ini tidak ada yang duplicate" << endl;
    }
    return 0;
}

bool cekduplicate(int arr[], int n){
    for ( int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                return true;
            }
        }
    }
    return false;
}
