#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    for( int i = 0; i < n; i++ ){
        int nu;
        cin >> nu;
        if( nu < 38 ){
            cout << nu << endl;
        }
        else{
            if( nu % 5 >= 3){
                cout << (nu+(5-nu%5)) << endl;
            }
            else{
                cout << nu << endl;
            }
        }
    }
    return 0;
}
