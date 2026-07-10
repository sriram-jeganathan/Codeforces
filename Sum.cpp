#include <iostream>
using namespace std;

string getResult ( int a, int b, int c ) {
    if ( a + b == c || a + c == b || b + c == a ) {
        return "YES";
    } else {
        return "NO";
    }
}

int main( void ) {
    int t;
    cin >> t;
    for ( int i = 0; i < t; i++ ) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << getResult( a, b, c ) << endl;
    }
    return 0;
}