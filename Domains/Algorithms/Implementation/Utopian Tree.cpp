#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int inc(int a){
    return a+1;
}

int doub(int a){
    return a*2;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int x = 1;
        for(int i = 1; i <= n; i++ ){
            if(i % 2 == 0 ){
                x = inc(x);
            }
            else{
                x = doub(x);
            }
        }
        cout << x << "\n";
    }
    return 0;
}