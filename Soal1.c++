#include <iostream>

using namespace std;

int main()
{
    const int n = 10;

    float p[n];
    int max = 0;
    int min = 1;
    float rerata = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }
        if (p[i] < min) {
            min = p[i];
        }
        rerata += p[i];
    }
    rerata = rerata / n;

    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
    cout << "rata-rata: " << rerata << endl;
    return 0;
}
