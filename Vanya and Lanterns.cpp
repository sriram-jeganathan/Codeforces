//492B
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> spots(n);

    for (int i = 0; i < n; i++)
        cin >> spots[i];

    sort(spots.begin(), spots.end());

    double ans = max(spots[0], l - spots[n - 1]);

    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, (spots[i + 1] - spots[i]) / 2.0);
    }

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}