#include<iostream>
#include<string>
#include<utility>
#include<algorithm>

using namespace std;

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

string board[51];

int WChess(int x, int y){
    int count = 0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if (board[i+x][j+y] != WB[i][j]){
                count++;
            }
        }
    }
    return count;
}

int BChess(int x, int y){
    int count = 0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if (board[i+x][j+y] != BW[i][j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    pair<int,int> input;
    int tmp;
    int min_value = 1000000;
    cin >> input.first >> input.second;
    for(int i=0;i<input.first;i++){
        cin >> board[i];
    }
    for(int i=0;i<input.first-7;i++){
        for(int j=0;j<input.second-7;j++){ 
            tmp = min(WChess(i,j),BChess(i,j));
            if (tmp < min_value){
                min_value = tmp;
            }
        }
    }
    cout << min_value;
    return 0;
}