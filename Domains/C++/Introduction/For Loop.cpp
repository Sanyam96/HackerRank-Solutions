#include <iostream>
#include <cstdio>
using namespace std;

void alpha(int n){
    if( n == 1 ){
        cout << "one" << endl;
    }
    else if( n == 2 ){
        cout << "two" << endl;
    }
    else if( n == 3 ){
        cout << "three" << endl;
    }
    else if( n == 4 ){
        cout << "four" << endl;
    }
    else if( n == 5 ){
        cout << "five" << endl;
    }
    else if( n == 6 ){
        cout << "six" << endl;
    }
    else if( n == 7 ){
        cout << "seven" << endl;
    }
    else if( n == 8 ){
        cout << "eight" << endl;
    }
    else{
        cout << "nine" << endl;
    }
}

void eo(int n){
    if( n % 2 == 0){
        cout << "even" << endl;
    }
    else{
        cout << "odd" << endl;
    }
}


int main() {

    string number[10] = {"", "one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
       
        if(i <= 9)
        {
            cout << number[i] << endl;
        }
        else
        {
            if(!(i%2))
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}

