#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long tmp;
        cin >> tmp;

        long long squart = sqrt(tmp);

        if (squart * squart != tmp) {
            cout << "NO\n";
            continue;
        }

        bool isPrime = true;

        if (squart < 2)
            isPrime = false;
        else {
            for (long long j = 2; j * j <= squart; j++) {
                if (squart % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}