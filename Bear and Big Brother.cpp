#include <iostream>
using namespace std;

int getResult(int a, int b) {
    int years = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    return years;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << getResult(a, b);
}