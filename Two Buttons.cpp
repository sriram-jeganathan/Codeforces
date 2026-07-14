//320B
#include <iostream>
using namespace std;

int main ( void ) {
    int n, m;
    int steps = 0;
    cin >> n >> m;

    if ( m < n ) {
        cout << n - m << endl;
        return n - m;
    } else if ( m > n ) {
        int nums=m;
        while ( nums > n ) {
            nums /= 2;
            steps++;
        }
        steps += ( n - nums );
        cout << steps << endl;
        return steps;
    }
    return steps;
}