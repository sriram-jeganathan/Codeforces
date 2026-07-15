//25A

#include <iostream>
using namespace std;

int main ( void ) {
    int sze;
    int oddcnt=0, evencnt=0;
    int oddidx=0, evenidx=0;
    cin >> sze;

    for ( int i = 1; i <= sze; i++ ) {
        int x;
        cin >> x;
        if ( x % 2 == 0 ) {
            evencnt++;
            evenidx = i;
        } else {
            oddcnt++;
            oddidx=i;
        }
    }

    if ( evencnt == 1 ) {
        cout << evenidx << endl;
    } else {
        cout << oddidx << endl;
    }
    return 0;
}