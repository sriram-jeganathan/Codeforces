// 263A
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main ( void ) {
    int num;
    int x, y;
    for ( int i = 1; i <= 5; i++ ) {
        for ( int j = 1; j <= 5; j++ ) {
            cin >> num;
            if ( num == 1 ) {
                x = i;
                y = j;
            }
        }
    }
    int change = abs(x-3) + abs(y-3);
    cout << change;
    return 0;
}
