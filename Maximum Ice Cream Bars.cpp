#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxIceCreamBars( vector<int>& costs, int coins ) {
    sort(costs.begin(), costs.end());
    int count = 0;
    for (int cost : costs) {
        if (coins >= cost) {
            coins -= cost;
            count++;
        } else {
            break;
        }
    }
    return count;
}

int main() {
    int n, coins;
    cin >> n >> coins;
    vector<int> costs(n);
    for (int i = 0; i < n; i++) {
        cin >> costs[i];
    }
    cout << maxIceCreamBars(costs, coins) << endl;
    return 0;
}