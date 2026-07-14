//546A


#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    long long totalCost = 0;
    for (int i = 1; i <= w; i++) {
        totalCost += i * k;
    }

    long long borrowed = totalCost - n;
    if (borrowed > 0) {
        cout << borrowed << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}