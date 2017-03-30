#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    // your code goes here
    int highScore = score.at(0);
    int lowScore = score.at(0);
    int countOfHighScore = 0;
    int countOfLowScore = 0;
    
    //cout << "high : " << highScore << "\nLow : " << lowScore << "\n";
       
    for(int score_i = 0; score_i < n; score_i++){
        if ( highScore < score.at(score_i) ){
            countOfHighScore++;
            highScore = score.at(score_i);
        }
        if( lowScore > score.at(score_i) ){
            lowScore = score.at(score_i);
            countOfLowScore++;
        }
    }
    
    cout << countOfHighScore << " " << countOfLowScore;
    
    return 0;
}
