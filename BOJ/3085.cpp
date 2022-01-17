#include<iostream>
#include<algorithm>

using namespace std;

char board[51][51];
int n;

int check(){
    int max = -1;
    for (int i=0;i<n;i++){
        int count = 1;
        char tmp = board[i][0];
        for (int j=0;j<n-1;j++){
            if (tmp == board[i][j+1]){
                count++;
            }
            else count = 1;
            tmp = board[i][j+1];
            if (count > max)
                max = count;
        }
    }

    for (int i=0;i<n;i++){
        int count = 1;
        char tmp = board[0][i];
        for (int j=0;j<n-1;j++){
            if (tmp == board[j+1][i]){
                count++;
            }
            else count = 1;
            tmp = board[j+1][i];
            if (count > max)
                max = count;
        }  
    }
    return max;

    
}
int main(){
    cin >> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> board[i][j];
        }
    }
    int result = check();
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (board[i][j] != board[i][j+1]){
                swap(board[i][j], board[i][j+1]);
                if (result < check())
                    result = check();
                swap(board[i][j],board[i][j+1]);
            }
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (board[j][i] != board[j+1][i]){
                swap(board[j][i], board[j+1][i]);
                if (result < check())
                    result = check();
                swap(board[j][i],board[j+1][i]);
            }
        }
    }
    cout << result;
    return 0;
}


