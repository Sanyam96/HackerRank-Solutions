#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int fine = 0;

    if ( d1 > d2 && m1 == m2 && y1 == y2 ){
        //int x = abs( 500 *(m1-m2)) ;
        //int y = mod( 15)
        fine = 15*(d1-d2);
        //cout << "10000" << "\n";
    }
    else if ( m1 > m2 && y1 == y2 ){
        //int x = abs(15*(d1-d2));
        fine = 500 * (m1-m2);
        //cout << ( 500*(m1-m2) )<< "\n";
    }
    else if ( y1 > y2 ){
        fine = 10000;
        //cout << (15 * (d1-d2)) << "\n";
    }
    cout << fine << "\n";
    return 0;
}
