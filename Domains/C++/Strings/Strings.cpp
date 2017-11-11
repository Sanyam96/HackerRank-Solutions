/*
Program of Hackerrank Solution Domains>C++>Strings>Strings.cpp
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    
    string s1, s2;

    cin >> s1 >> s2;

    cout << s1.size() << " " << s2.size() << endl;

    cout << s1+s2 << endl;

    char a1 = s1[0];
    char a2 = s2[0];

    s1[0] = a2;
    s2[0] = a1;

    cout << s1 << " " << s2;  
    return 0;
}