#include <bits/stdc++.h>
using namespace std;
// Struktur data untuk merepresentasikan produk
struct Product {
    string name;
    string category;
    int price;
};
// Struktur data untuk merepresentasikan minat pelanggan
struct CustomerInterest {
    unordered_set<string> interests;
};
// Fungsi untuk memberikan rekomendasi produk berdasarkan minat pelanggan
vector<string> recommendProducts(const vector<Product>& products, const map<string, CustomerInterest>& customers, const string& customerName) {
    vector<string> recommendations;

    // Mendapatkan minat pelanggan berdasarkan nama pelanggan
    auto it = customers.find(customerName);
    if (it != customers.end()) {
        const CustomerInterest& interest = it->second;

        // Memeriksa setiap produk untuk mencari yang sesuai dengan minat pelanggan
        for (const Product& product : products) {
            if (interest.interests.count(product.category) > 0) {
                recommendations.push_back(product.name);
            }
        }
    }
    return recommendations;
}
int main() {
    // Mendefinisikan produk
    vector<Product> products = {
        {"TV", "elektronik", 1000},
        {"headphone", "elektronik", 200},
        {"baju", "fashion", 50},
        {"gitar", "musik", 300},
        {"sepatu", "olahraga", 80},
        {"kamera", "elektronik", 600}
    };

    // Mendefinisikan minat pelanggan
    map<string, CustomerInterest> customers;
    customers["Rina"].interests = {"elektronik", "musik"};
    customers["Budi"].interests = {"fashion", "musik"};
    customers["Hartono"].interests = {"Olahraga", "elektronik"};

    // Menampilkan rekomendasi produk untuk setiap pelanggan
    for (const auto& customer : customers) {
        const string& customerName = customer.first;
        const vector<string>& recommendations = recommendProducts(products, customers, customerName);

        cout << "Rekomendasi produk untuk " << customerName << ": [";
        for (size_t i = 0; i < recommendations.size(); ++i) {
            cout << recommendations[i];
            if (i < recommendations.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
