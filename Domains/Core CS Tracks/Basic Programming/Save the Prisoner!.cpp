#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    int N,M,S,T;
    cin >> T;   // for Test cases
    for(int t = 0; t < T; t++){
        cin >> N >> M >> S; // N->pris, M->sweets, S->ID
        if ( ! ( (M + S - 1) % N ) ) 
            cout << N << endl;
        else 
            cout << ( ( M + S - 1 ) % N ) << endl;
    }
    return 0;
}
