// 122A
#include <iostream>
#include <vector>
using namespace std;

string checkLuck ( int num ) {
    int luck_numbers[] = {4,7,44,47,74,77,444,447,474,744,747,774,777};
    for ( int i : luck_numbers ) {
        if ( i == num || num % i == 0 ) {
            return "YES";
        }
    }
    return "NO";
}

int main ( void ) {
    int num;
    cin >> num;
    cout << checkLuck(num);
    return 0;
}