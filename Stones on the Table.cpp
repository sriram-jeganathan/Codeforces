//266A
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        s += c;
    }

    for ( int i = 0; i < s.size() - 1; i++ ) {
        if ( s[i] == s[i + 1] ) {
            s.erase(i, 1);
            i--;
        }
    }
    cout << n - s.size() << endl;
}