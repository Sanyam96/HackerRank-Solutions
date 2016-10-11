#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    double positive = 0;
    double negative = 0;
    double zeroes = 0;
    double positiveFraction;
    double negativeFraction;
    double zeroesFraction;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
        else{
            zeroes++;
        }
    }

    positiveFraction = positive/n;
    negativeFraction = negative/n;
    zeroesFraction = zeroes/n;
    cout << positiveFraction << endl;
    cout << negativeFraction << endl;
    cout << zeroesFraction << endl;
    return 0;
}