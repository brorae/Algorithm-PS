#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int row,col;
    for (int i=1;i<=yellow;i++){
        if (yellow%i == 0){
            col = i; // 세로
            row = yellow/i; // 가로
        }
        if(row >= col && (row+2) * (col+2) - yellow == brown){
            answer.push_back(row+2);
            answer.push_back(col+2);
            break;
        }
    }
    return answer;
}