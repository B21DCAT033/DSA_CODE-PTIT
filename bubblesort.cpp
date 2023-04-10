// brute_sort B21DCAT033
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
    	bool noswap=1; // Kĩ thuật đặt lính canh
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                noswap=0;
            }
        }
        if(noswap) break;
        cout << "Buoc " << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
