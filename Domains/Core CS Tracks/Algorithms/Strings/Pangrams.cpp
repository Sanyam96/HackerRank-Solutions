#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  

    string inputString;
	getline( cin, inputString);
	int alphabetTab = 0;
	int alphabet[26];
	int flag = 0;
	for( int i = 0; i < 26; i++ ){
		alphabet[i] = 0;
	}

	for(int i = 0; i < inputString.length(); i++){
		int insertNum = (tolower(inputString[i]) - 'a');
		if(insertNum < 0 || insertNum > 25){
			continue;
		}
		if(alphabet[insertNum] == 0){
			alphabetTab++;
		}
		if(alphabetTab >= 26){
			flag = 1;
			break;
		} else {
			alphabet[insertNum]++;
		}
	}

	if(flag){
		cout << "pangram" << endl;
	} else {
		cout << "not pangram" << endl;
	}

	return 0;
}
