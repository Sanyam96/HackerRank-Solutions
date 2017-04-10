#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;

    int alice = 0, bob = 0;

    if( a0 > b0 ){
        alice = alice + 1;
    }
    else if( a0 < b0){
        bob = bob + 1;
    }
    //----------

    if( a1 > b1 ){
        alice = alice + 1;
    }
    else if( a1 < b1){
        bob = bob + 1;
    }
    //----------

    if( a2 > b2 ){
        alice = alice + 1;
    }
    else if( a2 < b2){
        bob = bob + 1;
    }
    //------------

    cout << alice << " " << bob << endl;
        
    
    return 0;
}
